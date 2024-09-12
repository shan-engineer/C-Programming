#include<stdio.h>

typedef struct dimensional{
    int a;
    int b;
}dmt;

int main () {
  dmt v = {23,34};
  printf("The value of A is %d and B is %d\n",v.a,v.b);

    return 0;
}