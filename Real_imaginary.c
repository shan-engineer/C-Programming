#include<stdio.h>
typedef struct c{
    int real;
    int image;
}complex;

void display(complex c){
    printf("The complex number are %d + %di\n\n",c.real,c.image);
}
int main () {
    complex array[5];

   for(int i=0;i<5;i++){
    printf("Enter your real number %d\n",i+1);
    scanf("%d",&array[i].real);

    printf("Enter your imaginary number %d\n",i+1);
    scanf("%d",&array[i].image);
    display(array[i]);

    if((i+1)==5){
        printf("Exinting programm_._._._._._. \n\n\n\n\n\n");
    }
   }

    return 0;
}