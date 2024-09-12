#include<stdio.h>
  
struct employee
{
    int code;
    float salary;
    char name[100];
};

int main () {

    struct employee e1, e2, e3, e4;
    
    printf("Enter your code please\n");
    scanf("%d",&e1.code);

     printf("Enter your name please\n");
    scanf("%s",e1.name);

    printf("Enter your salary please\n");
    scanf("%f",&e1.salary);

    printf(" Employee code : %d\n Employee name : %s\n Employee salary :%.2f\n ",e1.code,e1.name,e1.salary);
    
    return 0;
}