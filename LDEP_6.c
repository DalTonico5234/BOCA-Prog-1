#include <stdio.h>

int main()
{
	
	int l, c, i, j;
	int soma = 0, atual=0, somat=0;

	scanf("%d %d", &l, &c);

	for (i = 0; i<l; i++){
		soma=0;
		for(j = 0; j<c; j++){
      scanf("%d", &atual);
			soma += atual;
		}
    printf("%d\n", soma);
		somat += soma;
	}

	printf("%d\n", somat);

	return 0;
}