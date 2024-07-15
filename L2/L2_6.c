#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double soma(int n)
{
if (n==1)
{
    double s1, l=-1, m=0, i;
    for(i=1;i<=50;i++)
    {
        l += 2;
        m++;
        s1 += l/m;      
    } 
    return s1;
}
if (n==2)
{
   double s2, l=2, m=50, i;
    for(i=1;i<=50;i++)
    {
        l = pow(2,i);
        s2 += l/m;
        m--;
    }
    return s2;  
}
if (n==3)
{
    double s3, m=0, i;
    for (i=1;i<=10;i++)
    {
        m++;
        s3 += 1/m;
    }
return s3;  
}
}

int main()
{
int n;
double s;
scanf("%d", &n);
s = soma(n);
printf("%.6f", s);
return 0;
}
 