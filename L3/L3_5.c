#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

int Propriedade(int num)
{
  int ab, cd, ef;
  ab = num / 100;
  cd = num % 100;
  ef = ab + cd;
  if (ef*ef == num) return VERDADEIRO;
  else return FALSO;
}


int main()
{
  int n, m;

 scanf("%d %d", &n, &m);
 n += 1;
  for(n; n<m; n++)
  {
    if (Propriedade(n)) 
    {
      printf("%d\n", n);
    }
  }
  
  return 0;
}





