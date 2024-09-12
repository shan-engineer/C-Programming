#include<stdio.h>

int main () {
    int table[10];
    int a;
    printf("Enter the number:: \n");
    scanf("%d",&a);

    for(int i = 0; i < 10; i++){
        table[i] = a * (i+1);
    }

    for(int i = 0; i < 10; i++){
        printf(" %d X %d = %d \n",a,i+1,table[i]);
    }
    return 0;
}