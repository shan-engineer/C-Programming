#include<stdio.h>

int natural(int n);

int natural(int n){
   int sum = 0;
   int i=1;
    while ( i<=n ) 
    {
        sum += i;
        i++;
    }
    return sum;

}

int main () {
    
    int n;
    int sum = 0;
    int i=1;
    
     printf("enter your number::\n");
     scanf("%d",&n);

     printf("The sum of %d natural number is %d",n,natural(n));
    return 0;
}