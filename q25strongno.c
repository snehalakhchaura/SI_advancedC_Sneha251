//Check if a number is a Strong number [sum of factorial of digits = number]
#include <stdio.h>
int main () 
{
 int n , fact = 1 , rem , temp ,sum = 0 , i ;
 printf("enter your number: ");
 scanf("%d",&n);
 temp = n;
 for(i = temp ; temp > 0 ; temp /= 10 )
 {
    rem = temp % 10;
    fact = 1;
    for(int j = rem ; j > 0 ; j--)
    fact = fact * j ;
    sum = sum + fact;
 }
 if(sum == n)
 printf("number is a strong number.");
 else 
 printf(" numebr is not a strong number");
  return 0;
}