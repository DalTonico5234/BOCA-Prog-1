#include <stdio.h>
#include <stdlib.h>

int pares(int x, int y)
{
    x++;
    for(x;x<y;x++)
    {   
        if(!(x%2))
        {
            printf("%d ", x);
        }
    }
    return 0;
}



int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    printf("RESP:");
    pares(n,m);
    return 0;

}

