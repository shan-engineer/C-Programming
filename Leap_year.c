#include<stdio.h>

int main () {
    int year;
    
    printf("Enter Year :\n");
    scanf("%d",&year);

    if (year%4 == 0 && year%100 != 0 || year%400 == 0 ){
        printf("This is Leap year %d\n",year);
    }

    else {
        printf("This is Common year %d",year);
    }

    return 0;
}