#include <stdio.h>
#include "funtions.h"

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
}

void insertion_sort(int* arr, int len){
  int *firstIndex;
  int *secondIndex;
  int temp;

  for (firstIndex = arr + 1; firstIndex < arr + len; firstIndex++) {
    for (secondIndex = firstIndex; secondIndex > arr && *(secondIndex-1) > *secondIndex; secondIndex--) {
      temp = *secondIndex;
      shift_element(secondIndex-1,1);
      *(secondIndex-1) = temp;
    }
  }

    for(int i = 0; i < sizeof(arr); i++){
    printf("element at %d, is %d\n", i, arr[i]);
}
}