#include <stdio.h>
#include <stdlib.h>

void main()
{
  char c1,c2,c3,c4,c5,c6,c7,c8;
  scanf("%c%c%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8);
  if ((((c1 < 'a' || c1 > 'z')&&(c1 < 'A' || c1 > 'Z'))||((c2 < 'a' || c2 > 'z')&&(c2 < 'A' || c2 > 'Z'))||((c3 < 'a' || c3 > 'z')&&(c3 < 'A' || c3 > 'Z')))&&((c5 < '0' || c5 > '9')||(c6 < '0' || c6 > '9')||(c7 < '0' || c7 > '9')||(c8 < '0' || c8 > '9'))) printf("Codigo invalido!Problema nas letras e nos numeros!");
  else if (((c1 < 'a' || c1 > 'z')&&(c1 < 'A' || c1 > 'Z'))||((c2 < 'a' || c2 > 'z')&&(c2 < 'A' || c2 > 'Z'))||((c3 < 'a' || c3 > 'z')&&(c3 < 'A' || c3 > 'Z')))  printf("Codigo invalido!Problema nas letras!"); 
  else if ((c5 < '0' || c5 > '9')||(c6 < '0' || c6 > '9')||(c7 < '0' || c7 > '9')||(c8 < '0' || c8 > '9')) printf("Codigo invalido!Problema nos numeros!");
  else printf("Codigo valido!");
}