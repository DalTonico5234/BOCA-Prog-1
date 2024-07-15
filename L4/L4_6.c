#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} tPonto;

typedef struct {
  tPonto p1;
  tPonto p2;
} tReta;


tPonto incializaponto(float x, float y);
tPonto leponto();
void imprimeponto(tPonto p);
tPonto alterax(tPonto p, int x);
tPonto alteray(tPonto p, int y);
float retornax(tPonto p);
float retornay(tPonto p);
tPonto movimentaponto(tPonto p, float deltax, float deltay);
float calculadistancia(tPonto p1, tPonto p2);
int identificaquadrante(tPonto p);
tPonto identificasimetrico(tPonto p);
tReta inicializareta(tPonto p1, tPonto p2);
tReta lereta();
void imprimereta(tReta reta);
tPonto pontoinicialdareta(tReta reta);
tPonto pontofinaldareta(tReta reta);
float tamanhodareta (tReta reta);

tReta inicializareta(tPonto p1, tPonto p2)
{
  tReta reta;
  reta.p1 = p1;
  reta.p2 = p2;
  return reta;
}

tReta lereta()
{
  tReta reta;
  reta.p1 = leponto();
  reta.p2 = leponto();
  return reta;
}

void imprimereta(tReta reta)
{
  tPonto inicial,final;
  inicial = pontoinicialdareta(reta);
  final = pontofinaldareta(reta);
  printf("[(%.2f,%.2f):(%.2f,%.2f)]", inicial.x, inicial.y, final.x, final.y);
}

tPonto pontoinicialdareta(tReta reta)
{
  tPonto inicial;
  if (reta.p1.x < reta.p2.x) inicial = reta.p1;
  else if (reta.p1.x == reta.p2.x) 
  {
    if (reta.p1.y < reta.p2.y) inicial = reta.p1;
    if (reta.p1.y > reta.p2.y) inicial = reta.p2;
  }
  else inicial = reta.p2;
  return inicial;
}

tPonto pontofinaldareta(tReta reta)
{
  tPonto final;
  if (reta.p1.x < reta.p2.x) final = reta.p2;
  else if (reta.p1.x == reta.p2.x)
  {
    if (reta.p1.y < reta.p2.y) final = reta.p2;
    if (reta.p1.y > reta.p2.y) final = reta.p1;
  }
  else final = reta.p1;
  return final;
}

float tamanhodareta (tReta reta)
{
  return calculadistancia(reta.p1, reta.p2);
}


tPonto incializaponto(float x, float y)
{
    tPonto p;
    p.x = x;
    p.y = y;
    return p;
}

tPonto leponto()
{
    tPonto p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

void imprimeponto(tPonto p)
{
    printf("(%.0f,%.0f)", p.x, p.y);
}

float retornax(tPonto p)
{
   return p.x;
}

float retornay(tPonto p)
{
    return p.y;
}

float calculadistancia(tPonto p1, tPonto p2)
{
  
  return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
}

int identificaquadrante(tPonto p)
{
  if (p.x == 0 || p.y == 0) return 0;
  else if (p.x > 0 && p.y > 0) return 1;
  else if (p.x < 0 && p.y > 0) return 2;
  else if (p.x < 0 && p.y < 0) return 3;
  else if (p.x > 0 && p.y < 0) return 4;
  return 0;
}

tPonto identificasimetrico(tPonto p)
{
  if (p.x) p.x *= -1;
  if (p.y) p.y *= -1;
  return p;
}

tPonto alterax(tPonto p, int x)
{
  p.x = x;
  return p;
}

tPonto alteray(tPonto p, int y)
{
  p.y = y;
  return p;
}

int main ()
{
  int numero, i;
  tPonto p;
  tReta r;
  
  scanf("%d\n", &numero);

  for (i=0; i < numero; i++)
  {
    p = leponto();
    r = lereta();
    /*printf("%f\n", calculadistancia(pontoinicialdareta(r), p));
    printf("%f\n", calculadistancia(pontofinaldareta(r), p));*/

    
    if (calculadistancia(r.p1, p) < calculadistancia(r.p2, p)) printf("INICIO\n");
    else if (calculadistancia(r.p1, p) > calculadistancia(r.p2, p)) printf("FIM\n");
    else printf("EQUIDISTANTE\n");
  }

  return 0;
}