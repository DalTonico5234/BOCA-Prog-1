#include <stdio.h>
#include <stdlib.h>

int validos(char c1, char c2, char c3, char c4)
{
  if (((c1 >= 'a' && c1 <= 'z')||(c1 >= 'A' && c1 <=  'Z')||(c1 >= '1' && c1 <= '9'))&&((c2 >= 'a' && c2 <= 'z')||(c2 >= 'A' && c2 <=  'Z')||(c2 >= '1' && c2 <= '9'))&&((c3 >= 'a' && c3 <= 'z')||(c3 >= 'A' && c3 <=  'Z')||(c3 >= '1' && c3 <= '9'))&&((c4 >= 'a' && c4 <= 'z')||(c4 >= 'A' && c4 <=  'Z')||(c4 >= '1' && c4 <= '9'))) return 1;
  else return 0;
}

int iguais(char c1, char c2, char c3, char c4)
{
  if (((c1 == c3)||(c1 == c3 -32)||(c3 == c1 - 32))&&((c2 == c4)||(c2 == c4 -32)||(c4 == c2 -32))) return 1;
  else return 0;
}


int main ()
{
  char c1,c2,c3,c4;
  scanf("%c%c %c%c", &c1, &c2, &c3, &c4);
  if (validos(c1,c2,c3,c4))
  {
    if (iguais(c1,c2,c3,c4)) printf("IGUAIS");
    else printf("DIFERENTES");
  }
  else printf("Invalido");
}