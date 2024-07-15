#include <stdio.h>
#include <stdlib.h>

void main ()
{
  char c;
  int temp=1,op=0,ed=0;
  while (scanf("%c", &c) == 1)
  {
    if (c == '(')
    {
      while (scanf("%c", &c) == 1)
      {
        if (c == '(')
        {
          op++;
        }
        if (c == ')' && op == ed) break;
        else if (c == ')')
        {
          ed++;
          printf("%c", c);
        } 
        else printf("%c", c);
      }
    }
    
    if (temp == 1)
    {
      printf("RESP:");
      temp--;
    }
    
    if (c == '.') break;
  }
  
}