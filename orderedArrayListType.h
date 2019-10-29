#ifndef H_orderedArrayListType
#define H_orderedArrayListType

#include "arrayListType.h"

class orderedArrayListType: public arrayListType
{
public:
    void insert(int insertItem); 
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);

    orderedArrayListType(int size = 100);
      //Constructor
};


#endif