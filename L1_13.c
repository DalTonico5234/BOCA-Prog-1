/*L1_13
criado em: 29/03/2024
autor: leonardo roxo*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int p,i,r;
  scanf("%d %d", &p, &i);
  r = i % p;
  if(p == 1)
  {
    printf("RESP:1");
  }
  else
  {
    if(r == 0)
    printf("RESP:%d", p);
    else 
    {
      printf("RESP:%d", r);
    }
  }
return 0;
}