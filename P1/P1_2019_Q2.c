#include <stdio.h>

int main ()
{
  int x,y,z;
  char o;
  scanf("%d %c %d", &x, &o, &y);
  switch(o)
  {
    case '+': printf("SOMA:%d", x+y); break;
    case '-': printf("SUB:%d", x-y ); break;
    case '*': printf("MULT:%d", x*y); break;
    case '/':
    {
      printf("DIV:%d", x/y);
      if (x%y) printf(",RESTO:%d", x%y);
      break;
    }
  }
  return 0;
}