#include <stdio.h>
#include <stdlib.h>

void parImpar(int n)
{
  if (n%2) printf("Impar ");
  else printf("Par ");
}

void valorPrimo(int n)
{
  int i, cont=0;
  if (n == 1) printf("Nao e primo ");
  else
  {
  for (i = 2; i < n; i++)
  {
    if (!(n%i)) 
    {
      printf("Nao e primo "); 
      cont++;
      break;
  }
  }
  if (!(cont)) printf("Primo ");
  }
}

int somadosdigitos(int n)
{
  int dig, s, temp=1;
  while (s > 9 || temp == 1) 
    {
        s = 0;
        while (n)
        {
            dig = n % 10;
            n /= 10;
            s += dig;
        }
        if (s > 9)
        {
            n = s;
        } 
        temp--;
      printf("%d ", s);
      parImpar(s);
      valorPrimo(s);
      printf("\n");
    } 
  return s;
}

void main ()
{
    int n,s;
   
    scanf("%d", &n);
  
    s = somadosdigitos(n);
}