#include <stdio.h>

#define PRIMO 1
#define NAOPRIMO 0

int verificaNegativo(int n);
int verificaPrimo(int n);
int transformaPrimo(int n);

int verificaPrimo(int n) //FUNCIONA
{
    int den, cont=0;
    
    for (den=1;den<=n;den++)
    {
      if(n%den==0)
      {
        cont++;
      }
    }
    
    if(cont==2) return 1;
    else return 0;
}

int transformaPrimo(int n) //FUNCIONA
{
 int den=1, cont=0, ndnv=n;
    
    if (n < 0) //negativos
    {
      while (1)
      {
        n--;
        cont = 0;
        for (den=-1;den>=n;den--)
        {
          if(n%den==0)
          {
            cont++;
          }
        }
        if (cont == 2) break;
      }
    }
    
    else //positivos
    {
        while (1) 
        {
            n++;
            cont = 0;
            for (den=1;den<=n;den++)
            {
                if(n%den==0)
                {
                    cont++;
                }
            }
        if (cont == 2) break;
     }
    }

  if (n > 32000 || n < -32000) return ndnv;
    else return n;
}

int verificaNegativo(int n) // FUNCIONA
{
  if (n < 0) return 1;
  else return 0;
}

void main()
{
  int L, C, nl, nc, primo;
  float v;
  char c;

 scanf("%d %d", &L, &C);
 for (nl = 1; nl <= L; nl++)
 {
  for (nc = 1;  nc <= C; nc++)
  {
    scanf("%f ", &v);
    if (verificaPrimo(v))
    {
      printf("%.0f ", v);
    }
    else  
    {
      v = transformaPrimo(v);
      printf("%.0f ", v);
    } 
  }
  scanf("\n");
  printf("\n");
 }
  
}

