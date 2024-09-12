#include<stdio.h>

int main () {
    int a[] = {12,23,34,45,56,67,78,89,90,10};
    int* pointer = a;

    for(int i = 0; i < 10; i++){

        printf("The Values and Address of %d is %u \n",i+1,pointer[i]);
    }

    return 0;
}