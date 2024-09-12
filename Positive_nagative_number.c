#include<stdio.h>

int positive(int arr[] , int n ){

    int positive_number = 0;

    for(int i = 0 ; i < n; i++){
       
        if (arr[i] > 0)
        {
           positive_number++; 
        }
    }    return positive_number;
}

int main () {
    int array[] = {1,-2,3,-4,5,-6,7,8,-9,10};
     printf("The positive number is only %d \n",positive(array , 10));
    return 0;
}