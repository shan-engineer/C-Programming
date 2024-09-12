#include<stdio.h>

int fibo(int f);

int fibo(int f){
    if( f == 1 || f == 2 ){
        return f-1;
    }
     return fibo(f-1)+fibo(f-2);
}

int main () {
    int f;
    printf("Your Number:\n");
    scanf("%d",&f);
    printf("The fibonacci series is : %d",fibo(f));
    
    return 0;
}