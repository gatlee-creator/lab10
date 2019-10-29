#include "orderedArrayListType.h"
#include <iostream>
using namespace std;

int main()
{
    orderedArrayListType list_1(5);
    list_1.insertAt(0, 1);
    list_1.insertAt(1, 2);

    list_1.print(); 
    cout << list_1.listSize() << endl;

    return 0; 
}