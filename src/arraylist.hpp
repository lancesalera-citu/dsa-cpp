#include <iostream>
#include "list.hpp"
#define INITIAL_CAPACITY 5
#define GROWTH_FACTOR 1.5
using namespace std;

class ArrayList : public List {
    private:
        int* array;
        int size;
        int capacity;

        void dynamic_expand() {
            int new_size = ceil(capacity * GROWTH_FACTOR);
            int* new_array = (int*) realloc(array, new_size*sizeof(int));
            if(new_array != nullptr) {
                array = new_array;
                capacity = new_size;
            }
        }   
 
    public:
        ArrayList() {
            array = (int*) calloc(INITIAL_CAPACITY, sizeof(int));
            size = 0;
            capacity = INITIAL_CAPACITY;
        }

        void add(int num) {
            if(size == capacity) dynamic_expand();
            array[size++] = num;
        }

        int get(int pos) {
            if(pos < 1 || pos > size) return -1;
            return array[pos-1];
        }

        int remove(int num) {
            int pos = -1;

            for(int i=0; i<size; i++) {
                if(array[i] == num) {
                    pos = i;
                    break;
                }
            }

            if(pos == -1) return pos;

            for(int i=pos; i<size-1; i++) {
                array[i] = array[i+1];
            }
            size--;

            return pos+1;
        }

        void print() {
            for (int i = 0; i < capacity; i++) {
                if(i >= size) cout << "? ";
                else cout << array[i] << " ";
            }
            cout << endl;
        }
};