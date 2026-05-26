#include "DynamicArray.h"
#include <stdio.h>
#include <stdlib.h>

DynamicArray* createDynamicArray(){
    DynamicArray* a = (DynamicArray*)malloc(sizeof(DynamicArray));
    a->size = 0;
    a->capacity = 0;
    a->array = NULL;
    return a;
}

void append(DynamicArray* a, Element value){
    if(a == NULL) return;
    if( a->capacity == a->size ){
        if( a->capacity == 0){a->capacity = 1;}
        a->capacity *= 2;
        Element* temp = (Element*)realloc(a->array,a->capacity* sizeof(Element));
        if(temp == NULL){
            printf("Memory allocation failed");
            return;
        }
        else{
            a->array = temp;
        }
    }
    a->array[a->size] = value;
    a->size++;
}

void freeDynamicArray(DynamicArray* a){
    if(a == NULL) return;
    free(a->array);
    free(a);
}

void printAllElements(DynamicArray* a){
    if( a == NULL) return;
    for(int i = 0; i < a->size; i++){
        printf("Element #%d: %d\n",i+1,a->array[i].value);
    }
}

Element deleteLast(DynamicArray* a){
    if(a == NULL || a->size == 0){
        Element x;
        x.value = -1;
        return x;
    }
    Element temp = a->array[a->size-1];
    a->size--;
    return temp;
}