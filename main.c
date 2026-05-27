#include "DynamicArray.h"
#include <stdio.h>

int main(){
    DynamicArray* arr = createDynamicArray();
    Element e1;
    Element e2;
    Element e3;
    Element e4;
    Element e5;
    e5.value = 40;
    e4.value = 50;
    e3.value = 100;
    e1.value = 10;
    e2.value = 2;
    append(arr,e1);
    append(arr,e2);
    append(arr,e3);
    append(arr,e4);
    append(arr,e5);
    set(arr,0,99999);
    printAllElements(arr);

   
    
    freeDynamicArray(arr);
    arr = NULL;

    
}