/*L1_6
criado em: 26/03/2024
autor: leonardo roxo*/

#include <stdio.h>

int main ()
{
  int N1,N2;
  scanf("%d %d", &N1, &N2);
  float M = ((float)N1 + (float)N2)/2;
    if(5 > M) {printf("%.1f - Reprovado", M);}
    if(5 <= M && 7 > M) {printf("%.1f - De Recuperacao",M);}
    if(7 <= M) {printf("%.1f - Aprovado",M);}
    else {return 0;}
  return 0;
}