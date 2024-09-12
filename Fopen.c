#include<stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("c:\\Users\\Abc\\OneDrive\\Desktop\\C programming\\shan.txt","r");
     int num1,num2,num3;

    if(ptr==NULL){
        printf("We can not find the file  \n");
    }

   
    fscanf(ptr,"%d %d %d",&num1,&num2,&num3);
    printf("the number is  %d %d %d \n",num1,num2,num3);

    fclose(ptr);
 
    return 0;
}