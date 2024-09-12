#include<stdio.h>
#include<string.h>

int main () {
    char array[] = "Be carfull about your life";

    for (size_t i = 0; i < strlen(array); i++)
    {
         array[i] = array[i] + 1;
    }

    printf("%s \n",array);
    return 0;
}