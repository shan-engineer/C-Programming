#include<stdio.h>

int main () {
    int a=3;
    int* pointer = &a;
    int** pointer1 = &pointer;
    printf("The address of A is :: %u\n",&a);
    printf("The value of A is :: %u\n",*pointer);
     printf("The value of A is :: %u\n",**pointer1);
    return 0;
}