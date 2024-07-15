#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

typedef struct {
  int dia;
  int mes;
  int ano;
} tData;

int ehbissexto(int ano);
int diasnomes (tData d);
int calculatempoemdias (tData d);
tData passadata (tData d);
tData leecorrigedata ();
void imprimedata (tData d);
void imprimeintervalo(tData d1, tData d2);

int ehbissexto(int ano)
{
  if (!(ano%4) && (ano%100)) return VERDADEIRO;
  else return FALSO;
}

int diasnomes (tData d)
{
  int dialimite;
  
  switch (d.mes)
  {
    case 1: dialimite = 31; break;
    case 2: if(ehbissexto(d.ano)) dialimite = 29; else dialimite = 28; break;
    case 3: dialimite = 31; break;
    case 4: dialimite = 30; break;
    case 5: dialimite = 31; break;
    case 6: dialimite = 30; break;
    case 7: dialimite = 31; break;
    case 8: dialimite = 31; break;
    case 9: dialimite = 30; break;
    case 10: dialimite = 31; break;
    case 11: dialimite = 30; break;
    case 12: dialimite = 31; break;
  } 

  return dialimite;
}

int calculatempoemdias (tData d)
{
  int dialimite = diasnomes(d);
  int tempo=0;
  d.mes -= 1;
  for (d.mes; d.mes > 0; d.mes--)
  {
    tempo += d.mes*diasnomes(d);
  }
  tempo += (d.ano-1)*365 + (d.ano-1)/4 + d.dia;
  return tempo;
}

tData passadata (tData d)
{
  int dialimite;

  if (d.mes == 12 && d.dia == 31)
  {
    d.ano++;
    d.mes = 1;
    d.dia = 1;
  }

  else
  {
    dialimite = diasnomes(d);
    
    if (d.dia == dialimite)
    {
      d.mes++;
      d.dia = 1;
    }
  
    else d.dia++;
  }

  return d;
}

tData leecorrigedata ()
{
  tData d;
  scanf("%d %d %d\n", &d.dia, &d.mes, &d.ano);
  if (d.mes > 12) d.mes = 12;
  switch(d.mes)
  {
    case 1: if (d.dia > 31) d.dia = 31; break;
    case 2: if (ehbissexto(d.ano) && d.dia > 29) d.dia = 29; else if (d.dia > 28) d.dia = 28;
    case 3: if (d.dia > 31) d.dia = 31; break;
    case 4: if (d.dia > 30) d.dia = 30; break;
    case 5: if (d.dia > 31) d.dia = 31; break;
    case 6: if (d.dia > 30) d.dia = 30; break;
    case 7: if (d.dia > 31) d.dia = 31; break;
    case 8: if (d.dia > 31) d.dia = 31; break;
    case 9: if (d.dia > 30) d.dia = 30; break;
    case 10: if (d.dia > 31) d.dia = 31; break;
    case 11: if (d.dia > 30) d.dia = 30; break;
    case 12: if (d.dia > 31) d.dia = 31; break;
  }
  return d;
}

tData leecorrigedatafinal ()
{
  tData d;
  scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
  if (d.mes > 12) d.mes = 12;
  switch(d.mes)
  {
    case 1: if (d.dia > 31) d.dia = 31; break;
    case 2: if (ehbissexto(d.ano) && d.dia > 29) d.dia = 29; else if (d.dia > 28) d.dia = 28;
    case 3: if (d.dia > 31) d.dia = 31; break;
    case 4: if (d.dia > 30) d.dia = 30; break;
    case 5: if (d.dia > 31) d.dia = 31; break;
    case 6: if (d.dia > 30) d.dia = 30; break;
    case 7: if (d.dia > 31) d.dia = 31; break;
    case 8: if (d.dia > 31) d.dia = 31; break;
    case 9: if (d.dia > 30) d.dia = 30; break;
    case 10: if (d.dia > 31) d.dia = 31; break;
    case 11: if (d.dia > 30) d.dia = 30; break;
    case 12: if (d.dia > 31) d.dia = 31; break;
  }
  return d;
}

void imprimedata (tData d)
{
  int zero = 0;
  printf("'");
  if (d.dia < 10) printf("%d", zero);
  printf("%d/", d.dia);
  if (d.mes < 10) printf("%d", zero);
  printf("%d/%d'\n", d.mes, d.ano);
}

void imprimeintervalo(tData d1, tData d2)
{
  int t1 = calculatempoemdias(d1);
  int t2 = calculatempoemdias (d2);
  while(d1.ano != d2.ano || d1.mes != d2.mes || d1.dia != d2.dia)
  {
    imprimedata(d1);
    d1 = passadata(d1);
  }
}

void main ()
{
  tData d1,d2;
  d1 = leecorrigedata();
  d2 = leecorrigedatafinal();
  imprimeintervalo(d1,d2);
}

