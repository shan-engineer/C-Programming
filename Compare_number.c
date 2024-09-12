#include<stdio.h>

int main () {
    int a,b,c,d;
    printf("Enter value first:\n");
    scanf("%d",&a);

     printf("Enter value second:\n");
    scanf("%d",&b);

     printf("Enter value third:\n");
    scanf("%d",&c);

     printf("Enter value fourth:\n");
    scanf("%d",&d);

    if ( a>b && a>c && a>d){
        printf("Your gretest number is %d\n",a);
    }

    else if ( b>a && b>c && b>d){
        printf("Your gretest number is %d\n",b);
    }

    else if ( c>a && c>b && c>d){
        printf("Your gretest number is %d\n",b);
    }

    else if (d>a && d>b && d>c){
        printf("Your gretest number is %d\n",d);
    }
    
    else {
        printf("All value are equal\n");
    }
    return 0;
}