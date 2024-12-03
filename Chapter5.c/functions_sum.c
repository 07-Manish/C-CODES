#include<stdio.h>

int sum(int ,int); /*first write function name,
                then write what type of result it will give(return value) ,in front,
                then write what kind of input your function take, in parentheses */

int sum(int a , int b){
         
         printf("The sum is %d\n",a+b);
}
int main(){
     int x=7;
     int y=9;
     sum(x,y);

     int r=3;
     int t=89;
     sum(r,t);

     return 0;
}  