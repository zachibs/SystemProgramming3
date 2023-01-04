#include <stdio.h>
#include <string.h>
#include "funtions.h"

int strcontain (const char*,const char*);

void main(){
printf("%d\nd", strcontain("caatacat", "cat"));

}

int strcontain (const char* str1 ,const char* str2 ){
    if (str1 == NULL || str2 == NULL)
    {
        return 0;
    }
    
    int x,j;
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str2[x] == str1[j])
        {
            x++, j++;
        }
        else
        {
            j++;
            x = 0;
        }
       if (x == strlen(str2))
       {
        return 1;
       } 
    }            
    return 0; 

}
