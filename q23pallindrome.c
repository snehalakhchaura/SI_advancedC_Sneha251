//Check if a number is a Palindrome 

#include <stdio.h>
int main () 
{
 int i , n  , temp, rev = 0 , rem ;
 printf("enter you number: ");
 scanf("%d",&n);
 temp = n;
 for(i = temp ; temp > 0 ; temp = temp / 10 )
 {
   rem = temp % 10;
   rev = rev * 10 + rem;
 }
 if( n == rev )
 printf(" number is palindrome.");
 else 
 printf(" number is not a palindrome.");
  return 0;
}