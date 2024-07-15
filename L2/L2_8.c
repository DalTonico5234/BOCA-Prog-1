#include <stdio.h>


void primos(int n, int m)
{
    printf("RESP:");
    int cont = n + 1, i, primos;
        for (cont; cont<m; cont++)
        {
            primos = 0;
            i = 2;
            for(i; i<cont; i++)
            {
                if(!(cont%i)) primos++;
            }
            if(!(primos)) printf("%d ", cont);
        }
}



int main ()
{
    int n, m, i, div=0;
    scanf("%d %d", &n, &m);
    primos(n,m);
    return 0;
}
