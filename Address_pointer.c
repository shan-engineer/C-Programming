#include<stdio.h>

int main () {
    int a=3;
    int* pointer = &a;
    printf("The address of A is :: %u\n",&a);
    printf("The value of A is :: %d\n",*pointer)

    return 0;
}