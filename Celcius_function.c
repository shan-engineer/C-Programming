#include<stdio.h>

float temp(float c);

     float temp(float c){
       return  (9.0/5.0*c)+32.0;
       }

int main () {

    float c,f;
    printf("Enter Celsius\n");
    scanf("%f",&c);
    f=temp(c);
    printf("The Celcius convert into fehrenheit is %.2f",f);
   
    return 0;
}