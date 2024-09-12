#include<stdio.h>

int main () {
    int p,t;
    float r,sum;

    printf("Enter the Amount you Borrowed:\n");
    scanf("%d",&p);

    printf("Enter Your  Borrowed Time Period in Year:\n");
    scanf("%d",&t);

     printf("Enter Your Interest Percentage:\n");
    scanf("%f",&r);

    sum = (p*r*t)/100;

    printf("The total Amount You will have to Pay is %.2f\n",sum);

    return 0;
}