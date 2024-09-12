#include<stdio.h>

int main() {
    int r,h;
    float pi = 3.14, sum;

    printf("Enter the radius:\n");
    scanf("%d", &r);

    printf("Enter the height:\n");
    scanf("%d", &h);

    sum = pi * r * r * h;

    printf("The volume of the cylider with radius %d and height %d is %f\n", r, h ,sum);
    return 0;
}
