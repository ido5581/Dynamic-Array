#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include "Element.h"

typedef struct {
    Element* array;
    int size;//current size
    int capacity;// total 

}DynamicArray;

DynamicArray* CreateDynamicArray();
void append(DynamicArray* a, Element value);
void FreeDynamicArray(DynamicArray* a);



#endif