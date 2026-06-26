//Check if a character is an alphabet, digit, or special character.
#include <stdio.h>
int main () {
  char ch;
  printf("enter you character :");
  scanf("%c",&ch);
  if(( ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  printf("entered character is a alphabet.");
  else if( ch <= '0' && ch >= '9')
  printf("entered chraracter is a digit.");
  else
    printf("entered character is a special symbol."); 
  return 0;
}
