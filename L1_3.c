#include <stdio.h>

int main () 
{
    float a,b,x,y,p;
    scanf("%f %f %f %f", &a, &b, &x, &y);
    p = 2*(x-a+y-b);
    printf("%.2f", p);
    return 0;
}