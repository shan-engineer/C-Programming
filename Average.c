#include<stdio.h>

float average(int a , int b , int c){
    return (a+b+c)/3.0;
}


int main () {
  
   float a,b,c;
   printf("Enter your three number \n");
   scanf("%f",&a);
   scanf("%f",&b);
   scanf("%f",&c);
    printf("The avarage of the number is %.2f",average(a,b,c));
    return 0;
}