//wap to check weather a character is vowel or not
#include <stdio.h>
#include <math.h>
int main () {
char ch;
printf(" enter you character : ");
scanf("%c",&ch);
if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
printf("your entered character is a vowel.");
else 
printf("your entered character is a not vowel.");
return 0;
}