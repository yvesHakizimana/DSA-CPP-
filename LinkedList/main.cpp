#include <iostream>
#include "LinkedList.h";

using namespace std;

int main(){
    LinkedList linkedList;
    linkedList.addFirst(19);
    linkedList.deleteFirst();
    linkedList.printElements();
}
