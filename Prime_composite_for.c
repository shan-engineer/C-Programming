#include<stdio.h>

int main () {
    int n;
    int prime = 0;

    printf("Enter your number\n");
    scanf("%d",&n);

    if(n==1 || n==0){
        prime = 1;
    }


else {
    for(int i = 2 ; i < n ; i++){

        if(n%i == 0 && n!=2){
            prime = 1 ;
            break;
        }
    }}
    if(prime){
         printf("%d number is composite number\n",n);
    }
       else {
          printf("%d number is prime number\n",n);
       }
    return 0;
}