#include<stdio.h>

int main () {
    
    int n;
    int sum = 0;
    int i=1;
    
     printf("enter your number::\n");
     scanf("%d",&n);

    while ( i<=n ) 
    {
        sum += i;
        i++;
    }
     printf("The sum of %d natural number is %d",n,sum);
    return 0;
}