#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main() {
  
    srand(time(0));
    int random = (rand()% (100 + 1));
    int no_guess = 0;
     int guessed;

    do{
       
        printf("Guess your number\n");
        scanf("%d",&guessed);
        no_guess++;

        if(guessed>random){
            printf("Lower number please\n");
        }
    
       else if (guessed<random){
          printf("Heigher number please\n");
       }

       else if (guessed==random){
         printf("You guessed the number congrat's\n");
          printf("Random Number %d\n", random);
         printf("Your number of guess is %d\n",no_guess);
       }

     
    }while(guessed!=random);

    return 0;
}
