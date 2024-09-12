#include<stdio.h>

int main () {
    char value;

    printf("Enter your character\n");
    scanf("%c",&value);

    printf("Your character is %c\n",value);
    printf("Your character ASCII value is %d\n",value);

    if(value >= 97 && value <= 122){
        printf("Your character is in lowercase\n");
    }

    else {
        printf("Your character is not in lowercase");
    }
    return 0;
}