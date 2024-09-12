#include<stdio.h>

int main () {
    int celsius;
    float f;
   
    printf("Enter the temperature in Celsius:\n");
    scanf("%d",&celsius);

     f = (9.0/5.0*celsius)+32.0;

    printf("The answer is celsius %d the  fahrenheit will be %.2f\n",celsius ,f);
    return 0;
}