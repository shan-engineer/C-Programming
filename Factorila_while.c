#include<stdio.h>

int main () {
    int product=1;
    int i=1;
    int n;

    printf("Give me the number\n");
    scanf("%d",&n);

    while(i<=n){
    product *=i;
      i++;
    }
    printf("The factorial is %d",product);
    return 0;
}