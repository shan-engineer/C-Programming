#include<stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("table.txt","w");
    int num;

    printf("Enter your number \n");
    scanf("%d",&num);
    
    for(int i = 0; i < 10; i++){
        fprintf(ptr,"%d",num*(i+1));
        fprintf(ptr,"%c",'\n');
    }

    return 0;
}