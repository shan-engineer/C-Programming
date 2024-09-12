#include<stdio.h>

int main () {
    int product=1;
    int i=1;
    int n;

    printf("Give me the number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
    product *=i;
    //n!=n×(n−1)×(n−2)×⋯×1
    }
    printf("The factorial is %d",product);
    return 0;
}