#include<stdio.h>

int main () {
    
    int n;
    int sum = 0;
    int i=1;
    
     printf("Enter your number::\n");
     scanf("%d",&n);

     do
     {
        sum += i;
        i++;
    } while ( i<=n );
     printf("The sum of %d natural number is %d",n,sum);
    return 0;
}