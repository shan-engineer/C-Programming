#include<stdio.h>
 
 typedef struct vector{
    int a;
    int b;
 }sum;

 sum sumvector(sum v1){
    sum v3;
    v3.a = v1.a + v1.b;
    
   return v3;
 }

int main () {
    sum v1;
    int c, d;

    

    printf("enter the value V1.a \n");
    scanf("%d",&c);

    printf("enter the value V1.b \n");
    scanf("%d",&d);

    v1.a = c;
    v1.b =d;

     sum v3 = sumvector(v1);
    
    printf("the sum is v1 %d + %d is %d \n",v1.a,v1.b,v3.a);
    return 0;
}