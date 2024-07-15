#include <stdio.h>

int main ()
{
  int troco1,troco2,cinco1,um1,cinco2,um2;
  scanf("%d %d", &troco1, &troco2);
  cinco1 = troco1 / 5;
  um1 = troco1 % 5;
  cinco2 = troco2 / 5;
  um2 = troco2 % 5;
  if((cinco1+um1)==(cinco2+um2)) printf("Iguais!");
  if((cinco1+um1)>(cinco2+um2)) printf("QTD troco 1 eh maior!");
  if((cinco1+um1)<(cinco2+um2)) printf("QTD troco 2 eh maior!");
  return 0;
}