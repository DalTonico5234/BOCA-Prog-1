#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char c;
  while(1)
  {
    scanf("%c", &c);
    if (c == '!' || c == '?' || c == '.') 
    {
      printf("%c", c);
      break;
    }
  else if(c >= 'a' && c <='z') 
  {
    c = c - 32;
    printf("%c", c);
  }
  else  printf("%c", c);
  }
  return 0;
}