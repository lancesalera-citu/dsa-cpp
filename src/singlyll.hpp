#include <iostream>
#include "list.hpp"
#include "node.hpp"

class SinglyLinkedList : public List {
    private:
        node* head;
        node* tail;
        int size;

    public:
        SinglyLinkedList() {
            head = nullptr;
            tail = nullptr;
            size = 0;
        }

        ~SinglyLinkedList() {

        }

        void add(int num) {

        }

        void addFirst(int num) {
            node* new_node = (node*) calloc(1, sizeof(node));

            if(new_node == nullptr) return;

            new_node->elem = num;
            head = new_node;
            new_node->next = head;

            if(tail == nullptr) tail = new_node;

            size++;
        }

        void addLast(int num) {
            node* new_node = (node*) calloc(1, sizeof(node));

            if(new_node == nullptr) return;

            new_node->elem = num;

            if(head == nullptr) {
                head = new_node;
            } else {
                tail->next = new_node;
            }

            tail = new_node;
            size++;
        }

        int remove(int num) {
            return 0;
        }

        int removeFirst() {
            if(head == nullptr) return -1;

            node* temp = head;
            int elem = temp->elem;
            head = head->next;

            if(head == nullptr) tail = nullptr;

            free(temp);
            size--;

            return elem;
        }

        int removeLast() {
            return 0;
        }

        int get(int pos) {
            return 0;
        }

        void print() {

        }

};