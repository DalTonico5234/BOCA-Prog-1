#include <stdio.h>

#define PRIMO 1
#define NAOPRIMO 0

int EhPrimo(int num)
{
    int den, cont=0;
    
    for (den=1;den<=num;den++)
    {
      if(num%den==0)
      {
        cont++;
      }
    }
    
    if(cont==2) return PRIMO;
    else return NAOPRIMO;
}

void ImprimeMultiplos(int num, int max)
{
  int den = num + 1, cont = 0;
  for (den; den < max; den++)
  {
    if (!(den%num)) 
    {
      printf("%d ", den);
      cont++;
    }
  }
  if (!(cont)) printf("*\n");
  else printf("\n");
}

int main()
{
  int n, m;

 scanf("%d %d", &n, &m);
 n += 1;
  for(n; n<m; n++)
  {
    if (EhPrimo(n)) 
    {
      printf("%d\n", n);
      ImprimeMultiplos(n,m);
    }
  }
  
  return 0;
}





