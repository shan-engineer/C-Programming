#include <stdio.h>

int main() {
  int a;
  int b;
  int product=0;

  printf("Enter your Number you want to Sum and table\n");
  scanf("%d", &a);

  for (b = 1; b <= 10; b++){
     
    int sum=a*b;
    product += sum;
    printf("%d X %d = %d\n", a, b,sum);
    
  }
    
    printf("the sum of your %d is %d\n", a, product);
    return 0;
}