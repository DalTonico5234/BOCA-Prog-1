#include <stdio.h>

int main ()
{
    int n, i, div=0;
    scanf("%d", &n);
    if (n==1) printf("Nao primo");
    else 
    {
        for (i=2;i<=n/2;i++)
        {
            if(!(n%i)) div++;
        }
    if(div>=1) printf("Nao primo");
    else printf("Primo");
    }
}