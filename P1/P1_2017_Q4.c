#include <stdio.h>
#include <stdlib.h>

void main()
{
int h1,h2,m1,m2,s1,s2, x;
scanf ("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
  if (h1 > h2)
  {
    x = ((h1 + m1 + s1)/10)%10;
    printf("RESP:%d", x);
  }
  if (h2 > h1)
  {
    x = ((h2 + m2 + s2)/10)%10;
    printf("RESP:%d", x);
  }
  if (h1 == h2)
  {
    if (m1 > m2)
    {
      x = ((h1 + m1 + s1)/10)%10;
      printf("RESP:%d", x);
    }
    if (m2 > m1)
    {
      x = ((h2 + m2 + s2)/10)%10;
      printf("RESP:%d", x);
    }
    if (m1 == m2)
    {
      if (s1 > s2)
      {
        x = ((h1 + m1 + s1)/10)%10;
        printf("RESP:%d", x);
      } 
      if (s2 > s1)
      {
        x = ((h2 + m2 + s2)/10)%10;
        printf("RESP:%d", x);
      } 
      if (s1 == s2)  printf("IGUAIS");
    }
  }
}



