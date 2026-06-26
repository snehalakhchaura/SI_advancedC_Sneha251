//Check if a number is a Prime number.

#include <stdio.h>
int main ()
 {
  int n ,temp , indi = 0, count = 0;
  printf("enter your number: ");
  scanf("%d",&n);
  temp = n;
  for(int i = 1 ; i <=temp ; i++)
  {
    if(temp % i == 0)
    count++;
    else if(count > 2)
    {
      indi = 1;
      break;
    }
  }
  if(n==1){
    printf("number is not a prime number");
  }
  else {
  if(indi == 0)
  printf("number is a prime number");
  else 
  printf("number is not a prime number");
  }
  return 0;
}