#include "funtions.h"
#include <string.h>
#include <stdio.h>

 int getlineNew(char s[]){
    int i;
    char tempChar;
    for (i = 0; i < LINE - 1; i++){
        tempChar = getchar();
        if((tempChar == '\n') || (tempChar == '\r')){
            break;
        }
        s[i] = tempChar;
    }
    s[i] = '\0';
    return i;
}

int getword(char s[]){
    int i;
    char tempChar;
    for (i = 0; i < WORD - 1; i++){
        tempChar = getchar();
        if((tempChar == '\n') || (tempChar == '\t') || (tempChar == ' ')){
            break;
        }
        s[i] = tempChar;
    }
    s[i] = '\0';

    return i;
}

int substring (char* str1 ,char* str2 ){
    if (str1 == NULL || str2 == NULL)
    {
        return 0;
    }
    
    int x = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str2[x] == str1[i])
        {
            x++;
        }
        else
        {
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

void print_lines(char * str){
    char line [LINE];
    while (getlineNew(line) < LINE - 1){
        if (substring(line,str)){
            printf("%s\n", line);
        }

    }
}

void print_similar_words(char * str){

char word [WORD];
while (getword(word) < WORD - 1){
    if (similar(word,str,1) || similar(word,str,0)){
        printf("%s\n",word);
    }

}
}

int main()
{
    char firstWord[WORD] = {};
    getword(firstWord);
    char choice;
    choice = getchar();

    if(choice == 'b'){
        print_similar_words(firstWord);
    } else{
        print_lines(firstWord);
    }
    
    return 0;
  
}

