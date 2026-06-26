#include<stdio.h>
int main () {

  int length , breadth , area ;

  printf( " enter length: ");
  scanf( "%d", &length );

  printf( " enter breadth: ");
  scanf( "%d", &breadth );

  area = length * breadth ;
  printf( " area of rectangle is %d ", area );

  return 0 ;
}