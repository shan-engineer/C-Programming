#include<stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("c:\\Users\\Abc\\OneDrive\\Desktop\\C programming\\multiply.txt","r+");

    int num;
    fscanf(ptr,"%d",&num);
    printf("The number from the file  :: %d \n",num);
     
     fclose(ptr);

     ptr = fopen("c:\\Users\\Abc\\OneDrive\\Desktop\\C programming\\multiply.txt","w");
     fprintf(ptr,"%d",num*2);

    int sum = num*2;
    printf("the multiply by %d X 2  is %d \n",num,sum);

    return 0;
}