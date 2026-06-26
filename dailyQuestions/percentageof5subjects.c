#include<stdio.h>
#include<math.h>
int main () {
  float m1, m2, m3, m4, m5, percentage;

  printf(" enter phy marks:");
scanf("%f", &m1);

printf(" enter chem marks:");
scanf("%f", &m2);

printf(" enter maths marks:");
scanf("%f", &m3); 

printf(" enter eng marks:");
scanf("%f", &m4);


printf(" enter cs4 marks:");
scanf("%f", &m5);  


percentage=(m1+m2+m3+m4+m5)/500 *100;

printf("percentage of 5 subjetc is %f",percentage);
return 0;
}

  
