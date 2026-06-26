#include<stdio.h>

int main ()
{
  int a ,b , reminder ;
  printf( "enter a and b:");
  scanf (" %d %d",&a , &b);

  reminder=a%b;
   printf( "reminder is %d" , reminder ); 
   return 0 ; 

}