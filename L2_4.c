#include <stdio.h>
#include <stdlib.h>

int main()
{
int n=1, maior=0, cont=0;
float soma, media;
while((n))
{
    scanf("%d", &n);
    if (n)
    {
        if (n>maior) maior=n;
        printf("%d ", maior);
        soma += n;
        cont++;
        media = soma/(float)cont;
        printf("%.6f\n", media);
    }
}
return 0;
}

