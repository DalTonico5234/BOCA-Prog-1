#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int l, c, i, j, linha, coluna;
	int maior=-32767, atual=0;

	scanf("%d %d", &l, &c);

	for (i = 0; i<l; i++){
		for(j = 0; j<c; j++)
        {
            scanf("%d", &atual);
			if (atual > maior)
            {
                maior = atual;
                linha = i;
                coluna = j;
            }
		}
    }
	printf("%d (%d,%d)", maior, linha + 1, coluna + 1);

	return 0;




}