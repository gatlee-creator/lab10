#include <iostream>
#include "orderedArrayListType.h"

using namespace std; 

void orderedArrayListType::insert(int insertItem)
{
    if(length == 0) //list is empty
        list[length++] = insertItem; //insert a beginning
    else if(length == maxSize)
        cout << "error: cannot insert in a full list" << endl;
    else{
        int loc;
        bool found = false; 
        //seq search
        for(loc=0; loc < length; loc++){
            if(list[loc] >= insertItem){
                found = true;
                break;
            }
        }
        
        for(int i=length; i > loc; i--)
            list[i] = list[i - 1]; //move elements down
    
        list[loc] = insertItem; //insert insertitem
        length++; //increase len of list

    }
} //end insert 

void orderedArrayListType::insertAt(int location,
                                      int insertItem)
{
    if (location < 0 || location >= maxSize)
        cout << "The position of the item to be inserted "
             << "is out of range." << endl;
    else if (length >= maxSize)  //list is full
        cout << "Cannot insert in a full list" << endl;
    else
    {
       insert(insertItem);
       //in orderedList placing it at a location doesn't matter
    }
} //end insertAt

void orderedArrayListType::insertEnd(int insertItem)
{
    if (length >= maxSize)  //the list is full
        cout << "Cannot insert in a full list." << endl;
    else
    {
        insert(insertItem);
    }
} //end insertEnd

int orderedArrayListType::seqSearch(int searchItem) const
{
    int loc;
    bool found = false;

    loc = 0;

    while (loc < length && !found)
        if (list[loc] >= searchItem) //search >= update. 
            found = true;
        else
            loc++;

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch


void orderedArrayListType::remove(int removeItem)
{
    int loc;

    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove

void orderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be "
             << "replaced is out of range." << endl;
    else
        list[location] = repItem;
} //end replaceAt

orderedArrayListType::orderedArrayListType(int size)
                       : arrayListType(size)
{
}  //end constructor