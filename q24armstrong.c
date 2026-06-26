//Check if a number is an Armstrong number 
#include <stdio.h>
#include <math.h>
int main () {
int i , temp , n , sum = 0  ;
double count = 0 , rem , power ;
printf("enter your number");
scanf("%d",&n);
temp = n;
for(i = temp ; temp > 0 ; temp = temp / 10)
{
  rem = temp % 10;
  count++; 
}
temp = n;
for(i = temp ; temp > 0 ; temp = temp / 10)
{
  rem = temp % 10;
  power = pow(rem ,count);
  sum = sum + power;
}
if(n == sum)
printf("number is a armstrong number.");
else
printf("number is not a armstrong number.");
return 0; 
}