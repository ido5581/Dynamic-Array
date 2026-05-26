#include "DynamicArray.h"
#include <stdio.h>

int main(){
    DynamicArray* arr = CreateDynamicArray();
    Element e1;
    Element e2;
    e1.value = 10;
    e2.value = 2;
    append(arr,e1);
    append(arr,e2);
    printf("The size of your array is: %d",arr->size);

    FreeDynamicArray(arr);
    arr = NULL;

    
}