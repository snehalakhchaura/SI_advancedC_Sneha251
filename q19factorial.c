//Calculate the factorial of a number.
#include <stdio.h>
int main() {
  int n , factorial = 1 ;
  printf(" enter your number : ");
  scanf("%d",&n);
  for( int i = n ; i >= 1 ; i--)
  {
    factorial = factorial * i;
  }
  printf("%d is the factorial of %d", factorial , n);
  return 0;
}