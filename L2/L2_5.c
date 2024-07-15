#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculos(int n)
{
    int k;
    float l, calculo;
    for(k=1;k<=n;k++)
    {
        l += 6/pow(k,2);
    }
    calculo = sqrt(l);
    return calculo;
}

int main()
{
int n;
float pi;
scanf("%d", &n);
pi = calculos(n);
printf("%.6f", pi);
return 0;
}