#include<stdio.h>


int change(int *a ,int  *b);

int change(int *a,int *b){
    int temp;
     temp = *a ;
    *a = *b;
     *b = temp;
}

int main () {
    int x = 3;
    int y = 4;
    printf("the values of A or B before swap are %d %d \n",x,y);

     change(&x,&y);
     printf("the values of A or B after  swap are %d %d \n",x,y);

    return 0;
}