#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>60){
        printf("you are senior citizen and you can drive");
    }
    else if(age>18){
        printf("you can drive");
    }
    else{
        printf("you cannot  drive");}
        return 0;
}