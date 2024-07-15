/*L1_9
criado em: 28/03/2024
autor: Leonardo Roxo*/

#include <stdio.h>

int main ()
{
  char x,y;
  scanf("%c", &x);
  if(97<=x && 122>=x)
  {
    y = x - 32;
    printf("%c(%d)", y, y);
  }
  else if(65<=x && 90>=x)
  {
    printf("A letra deve ser minuscula!");
  }
  else 
  {
    printf("Nao e letra!");
  }
return 0;
}