#include <stdio.h>

int main()
{
  int i, den, qtd, cont;

 scanf("%d", &qtd);
 
  for(i=2; i<=qtd; i++)
  {
    cont=0;
    for (den=1;den<=i;den++){
      if(i%den==0)
      {
        cont++;
      }
    }
    if(cont==2)
      printf("%d", i);
  }

  return 0;
}