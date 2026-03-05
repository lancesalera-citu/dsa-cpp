#include <iostream>
#include "arraylist.hpp"
// using namespace std;

int main() {
    List* list = new ArrayList();
    list->add(5);
    list->add(10);
    list->add(15);
    list->add(20);
    list->add(25);
    list->add(30);
    list->add(35);
    list->add(40);
    list->add(45);
    list->print();
    return 0;
}