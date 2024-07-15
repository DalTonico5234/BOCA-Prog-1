#include <stdio.h>


void primos(int n, int m)
{
    int cont = n + 1, i, j, primos, multiplos;
        for (cont; cont<m; cont++)
        {
            primos = 0;
            i = 2;
            for(i; i<cont; i++)
            {
                if(!(cont%i)) primos++;
            }
            if(!(primos)) 
            {
                printf("%d\n", cont);
                multiplos=0;
                for(j=cont + 1; j<m; j++)
                {
                    if(!(j%cont)) 
                    {
                        printf ("%d ", j);
                        multiplos++;
                    }
                }
                if (!(multiplos)) printf("*");
                printf("\n");
            }
        }
}



int main ()
{
    int n, m, i, div=0;
    scanf("%d %d", &n, &m);
    primos(n,m);
    return 0;
}
