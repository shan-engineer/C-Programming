#include<stdio.h>

float force(float mass);

float force(float mass){
    return mass*9.8;
}



int main () {
    float mass;
    printf("Enter your mass ( in KG )\n");
    scanf("%f",&mass);
    printf("the gravity force is %.2f Newton \n",force(mass));
    return 0;
}