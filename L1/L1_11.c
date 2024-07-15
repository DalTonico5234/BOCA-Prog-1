/* L1_11
criado em: 29/03/2024
autor:leonardo roxo */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int x;
  scanf("%d", &x);
  switch(x)
  {
    case 1: printf("Jan."); break;
    case 2: printf("Fev."); break;
    case 3: printf("Mar."); break;
    case 4: printf("Abr."); break;
    case 5: printf("Mai."); break;
    case 6: printf("Jun."); break;
    case 7: printf("Jul."); break;
    case 8: printf("Ago."); break;
    case 9: printf("Set."); break;
    case 10: printf("Out."); break;
    case 11: printf("Nov."); break;
    case 12: printf("Dez."); break;
  }
  if(1>x || 12<x)
  {
    printf("Invalido.");
  }
  return 0;
}