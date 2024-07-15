#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char x1,x3,x4; 
  int x2;
  //E1Ac Q2id
  scanf("%c%d%c%c", &x1, &x2, &x3, &x4);
  if ((x1 >= 'A' && x1 <= 'Z')&&(x3=='a'||x3=='e'||x3=='i'||x3=='o'||x3=='u'||x3=='A'||x3=='E'||x3=='I'||x3=='O'||x3=='U')&& !(x4=='a'||x4=='e'||x4=='i'||x4=='o'||x4=='u'||x4=='A'||x4=='E'||x4=='I'||x4=='O'||x4=='U')&&(x4 >= 'a' && x4 <= 'z')) 
  {
  x4 = x4 - 32;
  printf("%c%d%c%c", x1, x2, x3, x4);
  }
  else {printf("Invalido");}
  return 0;
}