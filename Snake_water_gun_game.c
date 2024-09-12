#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main () {

    srand(time(0));
    int player;
    int computer = rand() % 3;

    printf("||||____Choose your number____||||\n \n");
    printf("     0 ---> Snake\n     1--->Water\n     2--->Gun\n \n");
    printf("Enter your number :: ");
    scanf("%d",&player);

    if(player < 0 || player > 2){
        printf(" You choose invalid number please choose number between 0 to 2...... \n");
        return 1;
    }

    printf("Computer choose! %d\n",computer);

    if(player == 0 && computer == 0){
        printf("   Game draw!! \n");
    }

    else if(player == 1 && computer == 1){
        printf("   Game draw!! \n");
    }
    
    else if(player == 2 && computer == 2){
        printf("   Game draw!! \n");
    }
    
    else if(player == 0 && computer == 1){
        printf("   You won!! \n");
    }

    else if(player == 1 && computer == 0){
        printf("   You lose!! \n");
    }
    else if(player == 0 && computer == 2){
        printf("   You lose!! \n");
    }

    else if(player == 2 && computer == 0){
        printf("   You won!! \n");
    }

    else if(player == 1 && computer == 2){
        printf("   You won!! \n");
    }

    else if(player == 2 && computer == 1){
        printf("   You lose!! \n");
    }

    else{
        printf("  Something went wrong!! \n");
    }
    return 0;
}