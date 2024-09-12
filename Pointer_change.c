#include<stdio.h>

void change(int*);

void change(int* a){
    *a = *a * 10;
}

int main () {
    int x = 5;
    printf("the value is x is %d\n",x);
    change(&x);
    printf("the value is x after change is  %d\n",x);


    return 0;
}