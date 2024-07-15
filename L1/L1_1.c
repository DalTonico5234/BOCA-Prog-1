/*L1_1
criado em: 25/03/2024
autor: Leonardo Roxo*/

#include <stdio.h>
#include <math.h>

int main () 
{
    int  x,y;
    float S;
    scanf("%d %d", &x, &y);
    S = sqrt(x) + sqrt(y);
    printf("%.2f", S);
    return 0;
}