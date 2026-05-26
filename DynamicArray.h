#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include "Element.h"

typedef struct {
    Element* array;
    int size;//current size
    int capacity;// total 

}DynamicArray;

DynamicArray* createDynamicArray();
void append(DynamicArray* a, Element value);
void freeDynamicArray(DynamicArray* a);
void printAllElements(DynamicArray* a);
Element deleteLast(DynamicArray* a);



#endif