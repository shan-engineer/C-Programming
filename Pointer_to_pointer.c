#include<stdio.h>

int ptr(int* pointer);

int ptr(int* pointer){
    printf("the value of pointer is %d\n",pointer);
    printf("the address of pointer is %u\n",*pointer);
    return 0; 
}


int main () {
    int a = 4;
    int* pointer = &a;
    printf("the address of A is :: %u\n",*pointer);
    printf("the value of A is :: %d\n",pointer);
    ptr(pointer);
    return 0;
}