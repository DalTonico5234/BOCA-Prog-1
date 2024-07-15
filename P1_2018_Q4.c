#include <stdio.h>
#include <stdlib.h>

void tempo(int h, int m, int add)
{
  int d=0;
  m += add;
  while (m >= 60)
  {
    m -= 60;
    h++;
  }
  while (h >= 24)
  {
    h -= 24;
    d++;
  }
  if (d == 1) printf("(%d dia)", d);
  else if (d) printf("(%d dias)", d);
  if (h == 1) printf("(%d hora)", h);
  else if (h) printf("(%d horas)", h);
  if (m == 1) printf("(%d minuto)", m);
  else if (m) printf("(%d minutos)", m);
}

void main()
{
  int h,m,add;
  scanf("%d:%d %d", &h, &m, &add);
  tempo(h,m,add);
}