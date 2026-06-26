//Generate the Fibonacci sequence up to N terms.
#include <stdio.h>
int main () {
  int f1 = 0  , f2 = 1  , f3 , n;
  printf("enter you range: ");
  scanf("%d",&n);
  printf("your series is :\n");
  for(int i = 1 ; i <= n ; i++)
  {
    if(i==1)
    printf("%d\n",f1);
    else if(i==2)
    printf("%d\n",f2);

    f3 = f1 + f2 ;
       printf("%d\n",f3);
      f1 = f2;
    f2 = f3;
  }
  return 0;
}