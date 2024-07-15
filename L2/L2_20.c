#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void picos_e_vales(float a, float b, float c, float d, float e, float f)
{
  float y0,y,y1;
  int pico=0,vale=0;
  for(e; e <= f-2; e++)
  {
    y0 = a*pow(e, 3) + b*pow(e, 2) + c*(e) + d;
    y = a*pow(e+1, 3) + b*pow(e+1, 2) + c*(e+1) + d;
    y1 = a*pow(e+2, 3) + b*pow(e+2, 2) + c*(e+2) + d; 
    if (y > y0 && y > y1) 
    {
      printf("Pico em x=%.0f\n", e+1);
      pico++;
    }
    if (y < y0 && y < y1) 
    {
      printf("Vale em x=%.0f\n", e+1);
      vale++;
    }
  }
  if (!(pico)) printf("Nao ha pico\n");
  if (!(vale)) printf("Nao ha vale\n");
}

void main ()
{
  float a,b,c,d, e, f;
  scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
  picos_e_vales(a,b,c,d,e,f);
}