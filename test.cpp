#include "orderedArrayListType.h"
#include <iostream>
using namespace std;

int main()
{
    orderedArrayListType list_1(5);
    list_1.insert(4);
    list_1.insertAt(3,11);
   
    list_1.print(); 

    return 0; 
}