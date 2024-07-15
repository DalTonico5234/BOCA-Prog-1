/*L1_4
criado em: 26/03/2024
autor: leonardo roxo*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main ()
{
    float R,a,r;
    scanf("%f", &R);
    a = PI*R*R;
    r = sqrt (a/(2*PI));
    printf("%.2f ", a);
    printf("%.2f", r);
    return 0;
}