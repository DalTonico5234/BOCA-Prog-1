#include <stdio.h>
#include <math.h>

#define VERDADEIRO 1
#define FALSO 0

int EhPalindromo(int num)
{
  int num1=num,num2=num,num3=num,casa=0,pal=0;
  while (num1) //1234
  {
    num1 /= 10; //123 - 12 - 1 - 0
    casa++; // 1 - 2 - 3 - 4
  }
  casa -= 1;
  while(num3) //1234
  {
    num2 = num3 % 10; //4 - 3 - 2 - 1
    num3 /= 10; //123 - 12 - 1 - 0
    pal += pow(10,casa)*num2; //4000 - 4300 - 4320 - 4321
    casa--; //2 - 1 - 0 - -1
  }
  if (pal == num) return VERDADEIRO;
  else return FALSO;
}


int main()
{
  int n;

  while(scanf("%d", &n) == 1)
  {
    if (EhPalindromo(n)) 
    {
      printf("S\n");
    }
    else printf("N\n");
  }
  
  return 0;
}





