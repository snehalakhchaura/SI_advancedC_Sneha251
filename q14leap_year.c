#include <stdio.h>
int main () {
int n ;
printf("enter your year");
scanf("%d",&n);
if(n % 4 == 0 )
printf("year is leap year " );
else 
printf("year is not a leap year ");
return 0;
}