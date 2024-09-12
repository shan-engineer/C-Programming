#include<stdio.h>

struct employee
{
    int code;
    int age;
    char name[30];
};


void print(struct employee e1){
    printf("Enter your Employee Code : \n");
    scanf("%d",&e1.code);

     printf("Enter your Employee Age : \n");
    scanf("%d",&e1.age);

     printf("Enter your Employee Name : \n");
    scanf("%s",e1.name);

    printf("%d %d %s \n",e1.code,e1.age,e1.name);
}

int main () {

    struct employee e1;
    print(e1);
    
    return 0;
}