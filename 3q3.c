#include<stdio.h>

int main(){
    float income;
    printf("Enter your income:");
    scanf("%f",&income);
if(income<=5.0 && income>=2.5){
        printf("you have to pay 5%% tax");}
else if(income<=10.0 && income>=5.0){
        printf("you have to pay 20%% tax");}
 else if(income>=10.0){
        printf("you have to pay 30%% tax");}
 else {
    printf("you dont have to pay tax");}
        return 0;

}        
