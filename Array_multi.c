#include<stdio.h>

int main () {
    int array[3][10];
    int table[3];
    printf("Enter 3 numbers for the multiplication tables:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &table[i]);
    }

    for(int i=0; i < 3; i++){

        for(int j=0; j<10;j++){
          array[i][j] = table[i] * (j+1);
        }
    }
      
      printf("Tables:\n");

    for(int i=0; i < 3; i++){

        for(int j=0; j<10;j++){
            printf("%d x %d = %d\n", table[i], j + 1, array[i][j]);
        }
        printf("\n");
    }

    return 0;
}