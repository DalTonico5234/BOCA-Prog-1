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


int main()
{
  int n, m;

 scanf("%d %d", &n, &m);
 n += 1;
  for(n; n<m; n++)
  {
    if (EhPrimo(n)) printf("%d ", n);
  }
  
  return 0;
}





