#include<stdio.h>

int main(){

    int celsius,fahrenheit;
    printf("enter the temperature in celius :");
    scanf("%d",&celsius);
    int f=(9.0/5.0)*celsius + 32;
    printf("the temperature in fahrenheit is %d\n",f);
    return 0;
}