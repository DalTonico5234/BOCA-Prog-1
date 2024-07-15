#include <stdio.h>
#include <stdlib.h>

#define VERDADEIRO 1
#define FALSO 0

int EhLetra (char letra)
{
  if ((letra >= 'A' && letra <= 'Z')||(letra >= 'a' && letra <= 'z')) return VERDADEIRO;
  else return FALSO;
}

int EhLetraMaiuscula (char letra)
{
  if (letra >= 'A' && letra <= 'Z') return VERDADEIRO;
  else return FALSO;
}

int EhLetraMinuscula (char letra)
{
  if (letra >= 'a' && letra <= 'z') return VERDADEIRO;
  else return FALSO;
}

char Codifica(char letra, int n)
{
   if (EhLetraMinuscula(letra)) 
    {
      letra = 'a' + ((letra - 'a' + n)%26);
    }
    
    if (EhLetraMaiuscula(letra))
    {
      letra = 'A' + ((letra - 'A' + 2*n)%26);
    }
    
    return letra;  
}

char Decodifica (char letra, int n)
{
  char letra2;

    if (EhLetraMinuscula(letra)) 
    {
      letra2 = (letra -'a' -n);
      while (letra2 < 0)
        {
          letra2 += 26;
        }
      letra = 'a' + (letra2 %26);
    }
    if (EhLetraMaiuscula(letra))
    {
      letra2 = (letra - 'A' -2*n);
      while(letra2 < 0)
      {
        letra2 += 26;
      }
      letra = 'A' + (letra2 %26);
    }
  return letra;
}

void main ()
{
  int operacao, n;
  char letra='c';

  scanf("%d %d ", &operacao, &n);
  
  if (operacao == 1)
  {
    while(1)
    {
      scanf("%c", &letra);
      
      if(EhLetra(letra)) 
    {
      letra = Codifica(letra,n);
    }
  
    printf("%c", letra);

    if (letra == '.') break;
    }
  }
  else if (operacao == 2)
  {
    
    while(1)
    {
      scanf("%c", &letra);
      
      if(EhLetra(letra)) 
    {
      letra = Decodifica(letra,n);
    }
  
    printf("%c", letra);

    if (letra == '.') break;
    }
  }
  else printf("Operacao invalida.");
}
