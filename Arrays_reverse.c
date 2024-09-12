#include<stdio.h>

void  print_function(int array[6], int n ){
    
    for(int i = 0; i < n; i++){
        printf("%d ",array[i]);
    }
     printf("\n");
}

void reverse(int array[6],int n ){
    int temp;

    for(int i = 0; i < n/2; i++){
    
     temp = array[i];
     array[i] = array[n-i-1];
     array[n-i-1] = temp;

    }
}

int main () {
    int array_reverse[] = {1,2,3,4,5,6};
     print_function(array_reverse,6);
     reverse(array_reverse,6);
     print_function(array_reverse,6);
    
    return 0;
}