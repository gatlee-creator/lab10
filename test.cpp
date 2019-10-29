#include "orderedArrayListType.h"
#include <iostream>
using namespace std;

int main()
{
    orderedArrayListType list_1(5);
    list_1.insert(4);
    list_1.insertAt(3,11);
   
    list_1.print(); 

    list_1.insertAt(2,6);
    list_1.insertAt(0,1);

    list_1.print(); 

    list_1.insertEnd(2);
    list_1.print();

    //purposelly faulty 
    list_1.insertAt(7,67);
    list_1.insert(55);

    cout << list_1.seqSearch(6) << endl;
    cout << list_1.seqSearch(99) << endl;

    return 0; 
}