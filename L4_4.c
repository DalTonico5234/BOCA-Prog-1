#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} tPonto;

tPonto incializaponto(float x, float y);
tPonto leponto();
void imprimeponto(tPonto p);
tPonto alterax(tPonto p);
tPonto alteray(tPonto p);
float retornax(tPonto p);
float retornay(tPonto p);
tPonto movimentaponto(tPonto p, float deltax, float deltay);
float distancia(tPonto p1, tPonto p2);
int identificaquadrante(tPonto p);
tPonto identificasimetrico(tPonto p);

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

float distancia_p1_p2(tPonto p1, tPonto p2)
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
}

tPonto identificasimetrico(tPonto p)
{
  if (p.x) p.x *= -1;
  if (p.y) p.y *= -1;
  return p;
}

void main ()
{
  int numero, i;
  tPonto p,psimetrico;
  
  scanf("%d\n", &numero);

  for (i=0; i < numero; i++)
  {
    p = leponto();
    psimetrico = identificasimetrico(p);
    imprimeponto(p);
    printf(" %d ", identificaquadrante(p));
    imprimeponto(psimetrico);
    printf (" %d\n", identificaquadrante(psimetrico));
  }
}