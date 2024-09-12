#include<stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("c:\\Users\\Abc\\OneDrive\\Desktop\\C programming\\employee.txt","w");

    int salary;
    char name[20];

    printf("Enter employee name :: \n");
    scanf("%s",name);
    
    printf("Enter employee salary :: \n");
    scanf("%d",&salary);

    fprintf(ptr,"%s",name);
    fprintf(ptr,"%s", ", ");
    fprintf(ptr,"%d",salary);

    printf("\n\n____........___Your data saved succesfully____.......____\n\n\n");
    fclose(ptr);
    return 0;
}