#include<stdio.h>
#include<string.h>

int main () {
    char array[] = "Cf!dbsgvmm!bcpvu!zpvs!mjgf";

    for (size_t i = 0; i < strlen(array); i++)
    {
         array[i] = array[i] - 1;
    }

    printf("%s \n",array);
    return 0;
}