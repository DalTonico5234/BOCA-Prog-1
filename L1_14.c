/*L1_14
criado em: 29/03/2024
autor: leonardo roxo*/

#include <stdio.h>
#include <stdlib.h>

int main () 
{
  int x1,y1,x2,y2,x,y;
  scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x, &y);
  if(((x1 <= x && x2 >= x)||(x2 <= x && x1 >=x))&&((y1 <= y && y2 >= y)||(y2 <= y && y1 >= y)))
  {
    printf("Dentro");
  }
  else
  {
    printf("Fora");
  }
  return 0;
}