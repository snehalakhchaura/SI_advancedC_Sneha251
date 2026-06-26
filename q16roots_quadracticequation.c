//find the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>
int main () {
float a , b, c , root1 , root2 ;
printf("enter your coefficient of x^2 : " );
scanf("%f",&a);
printf("enter your coefficient of x : " );
scanf("%f",&b);
printf("enter your constant : ");
scanf("%f",&c);
if(a == 0)
printf("equation is not quadratic. ");
else 
{
root1 = (-b + sqrt ( b*b - 4 * a * c ))/(2*a);
root2 = (-b - sqrt ( b*b - 4 * a * c ))/(2*a);
printf("first root is %f \n second root is %f",root1 , root2);
}
return 0;
}