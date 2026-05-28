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
Element get(DynamicArray* a, int index);
void set(DynamicArray* a, int index, int value);
void insertAt(DynamicArray* a, int index, Element value);
void deleteAt(DynamicArray* a, int index);

#endif