#include<stdio.h>

int main () {
    int number[2][2];
   
   for (int i = 0; i < 2; i++)
   {

       for (int j = 0; j < 2; j++)
       {
        printf("Enter arrays of [%d] [%d] the names::\n",i,j);
        scanf("%d",&number[i][j]);
       }
              }

     for (int i = 0; i < 2; i++)
     {

        for (int j = 0; j < 2; j++)
        {

        printf("%d  ",number[i][j]);
         }
         printf("\n");
          }

    return 0;
}