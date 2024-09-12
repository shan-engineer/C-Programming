#include<stdio.h>

typedef struct employee{
    int code;
    int age; 
}Emp;

int main () {
    Emp e1;
    e1.code=232323;
    e1.age=12;
    Emp* ptr = &e1;
printf("Code is :%d\nAge is : %d  \n",ptr->code,ptr->age);

printf("___________This is second code__________ \n");
    
    Emp e2;
    e2.code=77777;
    e2.age=188;
    Emp* ptr1 = &e2;
printf("Code is :%d\nAge is : %d  \n",ptr1->code,ptr1->age);

    return 0;
}