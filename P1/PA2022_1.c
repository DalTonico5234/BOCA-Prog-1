#include <stdio.h>

int main ()
{
  char c;
  int x, n, m, n1,n2,n3,n4,m1,m2,m3,m4;

  scanf("(%c,%d,%d)", &c, &n, &m); //1234 4321
  
  n1 = n/1000; //1
  n2 = n/100 - 10*n1; //2
  n3 = n/10 - (10*n2 + 100*n1); //3
  n4 = n - (1000*n1 + 100*n2 + 10*n3); //4
  
  m1 = m/1000; //4
  m2 = m/100 - 10*m1; //3
  m3 = m/10 - (10*m2 + 100*m1); //2
  m4 = m - (1000*m1 + 100*m2 + 10*m3); //1

  if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
  {
    x = m1*10000000 + n1*1000000 + m2*100000 + n2*10000 + m3*1000 + n3*100 + m4*10 + n4;
    printf("(%d)", x);
  }
  else 
  {
    x = n1*10000000 + m1*1000000 + n2*100000 + m2*10000 + n3*1000 + m3*100 + n4*10 + m4;
    printf("(%d)", x);
  }
 return 0;
}