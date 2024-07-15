#include <stdio.h>
#include <stdlib.h>

int multiplos(int x, int y)
{
    x++;
    for(x;x<y;x++)
    {   
        if(!(x%3))
        {
            printf("%d ", x);
        }
        else if(!(x%4))
        {
            printf("%d ", x);
        }
        else if(!(x%7))
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
    multiplos(n,m);
    return 0;

}


