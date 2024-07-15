#include <stdio.h>
#include <stdlib.h>

void propriedade (int num) //3025
{
  int ab,cd,ef;
  ab = num/100; //30
  cd = num - 100*ab; //25
  ef = ab + cd;
  if (ef*ef == num) printf("%d\n", num);
}

int main()
{
  int n,m,num;
  scanf("%d %d", &n, &m);
  for (num=n+1 ; num < m ; num++)
  {
    propriedade(num);
  }
  return 0;
}