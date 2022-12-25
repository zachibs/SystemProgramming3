#include <stdio.h>;
#include "funtions.h";

void shift_element(int* arr, int i){
    int* elementAddress;
    int* nextElementAddress;
    int temp;
    int secondTemp;

    for(int index = 0; index < i; index++){
        elementAddress = arr + (1 * index);   
        nextElementAddress = elementAddress + 1;  

        if(index == 0){
        temp = *nextElementAddress;  
        *nextElementAddress = *elementAddress; 
        } 
        else{
            int secondTemp = *nextElementAddress;  
            *nextElementAddress = temp;  
            temp = secondTemp;
        }
    }

    for(int i = 0; i < sizeof(arr); i++){
        printf("element at %d, is %d\n", i, arr[i]);
    }
}