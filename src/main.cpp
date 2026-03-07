#include <iostream>
#include "arraylist.hpp"

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
    list->print();
    list->remove(5);
    list->remove(10);
    list->remove(15);
    list->print();
    // cout << 2.0/3 << endl;
    delete list;
    return 0;
}