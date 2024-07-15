/*L1_6
criado em: 28/03/2024
autor: leonardo roxo*/

#include <stdio.h>

int main ()
{
  char x;
  float a,b;
  scanf("%f %c", &a, &x);
    if(x=='c'|| x=='C') 
    {
      b = 1.8*a + 32;
      printf("%.2f (F)", b);
    }
    if(x=='f'|| x=='F')
    {
      b = (a-32)*5/9;
      printf("%.2f (C)", b);
    }
return 0;
}