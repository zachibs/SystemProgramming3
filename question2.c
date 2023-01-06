#include "funtions.h"
#include <string.h>
#include <stdio.h>

 int getlineNew(char s[]){
    char line [250];
    int count = 0;
    char ch;
    int i;
    for (i = 0; i < sizeof(line) - 1; i++){
        scanf("%c",&ch);
        if((ch == '\n') && (ch == '\r')){
            break;
        }
        line[i] = ch;
        count ++;
    }
    line[i] = '\0';
}

int getword(char s[]){
    char line [30];
    int count = 0;
    char ch;
    int i;

    for (i = 0; i < sizeof(line) - 1; i++){
        scanf("%c",&ch);
        if((ch == '\n') && (ch == '\t' && (ch != ' '))){
            break;
        }
        line[i] = ch;
        count ++;
    }
    line[i] = '\0';
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


int similar (char *s, char *t, int n){
    
    size_t lenS = strlen(s);
    size_t lenT = strlen(t);

    if ((lenS - n) != lenT){
        return 0;
    }

    int j = 0;

    for(int i = 0; i < lenS; i++){
        if(s[i] == t[j]){
            j += 1;
        }
    }

    if(j == lenT){
        return 1;
    }

    return 0;
    
}


void main()
{
    char *word2 = "abtra";
    char *word1 = "aba";

    int isSimilar = similar(word2, word1, 2);

    printf("is Similar=%d\n", isSimilar);
}

