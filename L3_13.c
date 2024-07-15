#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

int EhLetraMaiuscula (char letra)
{
  if (letra >= 'A' && letra <= 'Z') return VERDADEIRO;
  else return FALSO;
}

int EhLetraMinuscula (char letra)
{
  if (letra >= 'a' && letra <= 'z') return VERDADEIRO;
  else return FALSO;
}

int CalculaValorPalavra()
{
  char c='c';
  int s=0, valor =0 ;
  while(scanf("%c", &c) == 1 && c != '\n')
  {
    if (EhLetraMinuscula(c)) s += c - 96;
    else if (EhLetraMaiuscula(c)) s += c - 38;
  }
  return s;
}

int EhPrimo(int n)
{
  int i;
  if (n == 1) return FALSO;
  else
  {
    for (i = 2; i < n; i++)
    {
      if (!(n%i)) 
      {
        return FALSO;
    }
    }
  return VERDADEIRO;
  }
}

int ProximoPrimo(int n)
{
  while (1) 
  {
    int i,cont=0;
    n++;
    if (n == 1) cont++;
    for (i=2; i<n ; i++)
    {
      if(n%i==0)
      {
        cont++;
      }
    }
    if (!(cont)) break;
  }
  return n;
}

void main ()
{
  char c;
  int soma, primo, proxprimo;
  while (soma = CalculaValorPalavra())
  {
    if (EhPrimo(soma)) printf("E primo\n");
    else printf("Nao e primo %d\n", ProximoPrimo(soma));
  }
}