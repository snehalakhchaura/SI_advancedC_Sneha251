//Print all Prime numbers between 1 and N.
#include <stdio.h>
int main ()
{
  int n , i , indi = 0 , count= 0;
  printf("enter your number : ");
  scanf("%d",&n);
  for(i = 2 ; i<= n ; i++)
  {
    count = 0;
    for( int j = 1 ; j <= i ; j++)
    {
      if( i % j == 0)
        count++;
      else if ( count == 2 )
      { printf("%d\n",i);
       break; }
    }
  }
  return 0;
}