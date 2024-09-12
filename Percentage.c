#include<stdio.h>

int main () {
    int m1,m2,m3,m4,m5;
    float percentage;

    printf("Enter your English marks:\n");
    scanf("%d",&m1);

    printf("Enter you Math marks:\n");
    scanf("%d",&m2);

    printf("Enter your Science marks:\n");
    scanf("%d",&m3);

    printf("Enter your Computer Science marks:\n");
    scanf("%d",&m4);
    
    printf("Enter your Hindi marks:\n");
    scanf("%d",&m5);  

    percentage =(m1+m2+m3+m4+m5)/5.0;

    if (percentage >= 33)
    {
        printf("Your percentage is %.2f%%\n",percentage);
        printf("Congratulation You passed in cbse exam\n");
    }

    else
     {
      printf("Unfortunately you are fail you will have to practice more\n");
    }
    return 0;
}