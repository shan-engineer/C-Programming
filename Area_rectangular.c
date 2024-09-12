#include<stdio.h>

int main () {
    int l,b,sum;
    

    printf("Enter the value of length :\n");
    scanf("%d", &l);

    printf("Enter the value of breadth :\n");
    scanf("%d",&b);

    sum = l*b;

    printf("The area of rectanguler is: %d\n",sum);
        return 0;
}