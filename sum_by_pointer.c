#include<stdio.h>

int* add(int a,int b){
    int sum = a+b;
    int* ptr = &sum;
    printf("The sum is %d\n",sum);
    return ptr;
}

float* median(int a, int b){
   float average = (a+b)/2.0 ;
   float* ptr = &average;
   printf("The average is %.2f\n",average);
   return ptr;

}

int main () {
    int x = 4;
    int y = 6;
    int* pointer_sum;
    float* pointer_average;

    pointer_sum = add(x,y);
    pointer_average = median(x,y);
    printf("Your number are X=%d and Y=%d\n",x,y);
    printf("Address of sum is %u and average is %u \n",pointer_sum,pointer_average);

    return 0;
}