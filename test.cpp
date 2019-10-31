/*
    Name: Graham Atlee
    Course: csc1720
    Location of program: ~/csc1720/Labs/lab10
    Date: 10/30/19

    This program contains driver code to test the full extent of the
    orderedArrayListType class. 
*/
#include "orderedArrayListType.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "LIST 1: creating list_1 with size of 5" << endl;
    orderedArrayListType list_1(5);
    cout << "LIST 1: testing both insert and insertAt" << endl;
    list_1.insert(4);
    list_1.insertAt(3,11);
   
    cout << list_1 << endl; 

    cout << "LIST 1: insertAt random indexes. Shouldn't matter in an ordered list" << endl;
    list_1.insertAt(2,6);
    list_1.insertAt(0,1);

    cout << list_1 << endl; 

    cout << "LIST 1: calling insertEnd with low value. Should NOT insert at end of list" << endl;
    list_1.insertEnd(2);
    cout << list_1 << endl;

      //purposefully faulty values
    cout << "LIST 1: attempting to insert outside of permitted index" << endl;
    list_1.insertAt(7,67);
    cout << "LIST 1: attempting to insert in a full list" << endl;     
    list_1.insert(55);

    cout << "LIST 1: searching for 6. Should return index 3" << endl;
    cout << list_1.seqSearch(6) << endl;
    cout << "LIST 1: searching for 99. Should return a -1" << endl;
    cout << list_1.seqSearch(99) << endl;

    cout << "LIST 1: calling remove to remove 6 and 11 from the list" << endl;
    list_1.remove(6);
    list_1.remove(11); 
    cout << list_1 << endl; 
    cout << "LIST 1: attempting to remove 44. Should get message that its not in the list" << endl;
    list_1.remove(44); //bad search 

   
    cout << "LIST 2: creating list_2 by passing in list_1 to copy constructor" << endl;
    orderedArrayListType list_2(list_1); 
    cout << list_2 << endl;

    cout << "LIST 1 & 2: removing items from both list to check for shallow copy" << endl;
    list_1.insert(6);
    list_2.remove(2);
    cout << list_1 << endl;
    cout << list_2 << endl;
   
    cout << "LIST 2: using overloaded = operator to assign list_1 to list_2" << endl;
    list_2 = list_1;
    cout << list_2 << endl;

    cout << "LIST 3: creating list_3 through overloaded =. Assigning list_1 to list_3" << endl;
    orderedArrayListType list_3 = list_1; 
    cout << list_3 << endl;

    //checking if shallow copy could be occuring
    cout << "LIST 1 & 3: inserting extra value in list_3 to check for shallow copy" << endl;
    list_3.insert(8);
    cout << list_1 << endl;
    cout << list_3 << endl;

    return 0; 
}