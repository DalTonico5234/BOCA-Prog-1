#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define VERDADEIRO 1
#define FALSO 0

int InverteNumero(int num);
int EhIgual(int a, int b);

void main()
{
  int num, inv,count=0;
  while(scanf("%d", &num)==1)
  {
  inv = InverteNumero(num);
  if(EhIgual(inv,num))
  {
    count++;
  }
  }
  printf("COUNT:%d", count);
}

int EhIgual(int a, int b)
{
  if (a == b) return VERDADEIRO;
  else return FALSO;
}

int InverteNumero(int num)
{
  int num1=num, inv=0, casa=0, r;
  while(num1 != 0) 
  {
    num1 /= 10; 
    casa++; 
  }
  for(casa; casa > 0; casa--)
  {
    r = num % 10;
    inv += pow(10,casa-1)*r;
    num /= 10;
  }
  return inv;
}
