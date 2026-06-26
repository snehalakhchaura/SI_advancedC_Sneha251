#include <stdio.h>
int main () {
  float a , b ;
  char symb;
  printf("enter your first number : ");
  scanf("%f",&a);
  printf("enter your second number : ");
  scanf("%f",&b);
  printf("enter your symbol : ");
  scanf(" %c",&symb);
  switch (symb)
  {
  case '+' : printf("%f + %f = %f ", a , b ,a+b);
    break;
  case '-' : printf("%f + %f = %f ", a , b , a- b);
  break;
  case '*' : printf("%f * %f = %f ",a,b,a*b);
  break;
  case '/' : printf("%f / %f = %f" , a , b , a/b);
  break;

  default: printf("invalid symbol");
    break;
  }
  return 0;
}