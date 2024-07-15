#include <stdio.h>
#include <stdlib.h>

int validos(char c1, char c2, char c3, char c4, char c5, char c6)
{
  if ((c1 >= '0' && c1 <= '9')&&(c4 >= '0' && c4 <= '9')&&(c2 >= 'a' && c2 <= 'z')&&(c5 >= 'a' && c5 <= 'z')&&((c3 >= 'a' && c3 <= 'z')||(c3 >= 'A' && c3 <= 'Z'))&&((c6 >= 'a' && c6 <= 'z')||(c6 >= 'A' && c6 <= 'Z'))) return 1;
  else return 0;
}

char iguais(char c1, char c2)
{
  if (c1==c2) return 'I';
  if ((c1 == c2 -32)||(c1 == c2 + 32)) return 'C';
  else return 'D';
}


int main ()
{
  char c1,c2,c3,c4,c5,c6;
  scanf("%c%c%c %c%c%c", &c1, &c2, &c3, &c4, &c5, &c6);
  if (validos(c1,c2,c3,c4,c5,c6))
  {
    printf("%c", iguais(c1,c4));
    printf("%c", iguais(c2,c5));
    printf("%c", iguais(c3,c6));
  }
  else printf("Codigo invalido!");
}