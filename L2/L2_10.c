#include <stdio.h>


void tabuadas(int n, int m)
{
  int a; //algarismo de 1 a 10
  for (n; n <= m; n++) //passagem de tabuadas
  {
    for(a=1; a<=10; a++) //passagem de múltiplos da tabuada
    {
        printf("%dx%d=%d\n", n, a, n*a);
    } 
  }
}



int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    tabuadas(n,m);
    return 0;
}
