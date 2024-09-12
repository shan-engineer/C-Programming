#include<stdio.h>
typedef struct poin
{
    int  code;
    int age;
}pointer;

int main () {
    pointer e1;
    pointer* ptr = &e1;
    
    ptr->code = 10101201;
    ptr->age = 23;


    printf("code is %d\nage is  %d \n",ptr->code,ptr->age);

    return 0;
}