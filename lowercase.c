#include<stdio.h>

int main(){

    char character;
    printf("enter the character:");
    scanf("%c",&character);
    if(character >='a' && character<='z'){
        printf("character is lower case"); 
    }
    else{
        printf("not lowercase");
    }
    return 0;
}