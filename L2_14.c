#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char c;
  scanf("%c", &c);
  if (c == '!' || c == '?' || c == '.') printf("RESP:%c", c);
  else 
  {
    printf("RESP:%c", c);
    while(1)
  {
    scanf("%c", &c);
    if (c == '!' || c == '?' || c == '.') 
    {
      printf("%c", c);
      break;
    }
  else if(c == ' ') printf("%*c");
  else printf("%c", c);
  }
  }
  return 0;
}