#include "orderedArrayListType.h"
#include <iostream>
using namespace std;

int main()
{
    orderedArrayListType list_1(5);
    list_1.insert(4);
    list_1.insertAt(3,11);
   
    cout << list_1 << endl; 

    list_1.insertAt(2,6);
    list_1.insertAt(0,1);

    cout << list_1 << endl; 

    list_1.insertEnd(2);
    cout << list_1 << endl;

    //purposelly faulty 
    list_1.insertAt(7,67);
    list_1.insert(55);

    cout << list_1.seqSearch(6) << endl;
    cout << list_1.seqSearch(99) << endl;

    list_1.remove(6);
    list_1.remove(11); 
    list_1.remove(44); //bad search 

    cout << list_1 << endl; 

    orderedArrayListType list_2(list_1); 
    cout << list_2 << endl;

    list_2.remove(2);
    list_1.insert(6);

    cout << list_2 << endl;
    cout << list_1 << endl;

    list_2 = list_1;
    cout << list_2 << endl;

    orderedArrayListType list_3 = list_1; 
    cout << list_3 << endl;

    //checking if shallow copy could be occuring
    list_3.insert(8);
    cout << list_1 << endl;

    cout << list_3 << endl;

    return 0; 
}