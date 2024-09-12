#include<stdio.h>
#include<stdlib.h>

int main () {
    int n = 7;
    int* ptr = &n;
    ptr = (int*)malloc(n , sizeof(int));

    for(int i=1;i<=10;i++){
        printf("7 X %d = is %d \n",i,n*i);
    }

    return 0;
}