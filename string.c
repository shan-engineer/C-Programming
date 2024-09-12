#include<stdio.h>

int main () {
    char arr[30];
    printf("Enter your string \n");
    fgets(arr, sizeof(arr), stdin);
    printf("%s \n",arr);
    return 0;
}