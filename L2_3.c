#include <stdio.h>
#include <stdlib.h>

int maiores(int n, int cont)
/*não funciona, retorna sempre um número aleatório*/
{
int maior=0;
if (n>maior)
{
    maior=n;
}
return maior;
}

int menores(int n, int cont)
/*não funciona, retorna sempre o último número digitado*/
{
int menor;
if (n<menor)
{
    menor=n;
}
return menor;
}

int par=0;
int pares(int n) //OK
/*avalia se o número é par, caso seja, 
adiciona pontos no contador*/
{
if(!(n%2)) par++;
return par;
}

int impar=0;
int impares(int n) //OK
/*avalia se o número é impar, caso seja, 
adiciona pontos no contador*/
{
if(n%2) impar++;
return impar;
}

float media=0;
float medias(float n, float total) //OK
/*calcula a média de todos os números, somando uma
variável inicializada como 0 com o número dividido pela
quantidade total de números*/
{
media += n/total;
return media;
}

int main()
{
int n, total, maior=0, menor=999999999, par, impar, cont;
float media;
scanf("%d", &total);
for(cont=1;cont<=total;cont++)
{
scanf("%d", &n);
if (n>maior) maior=n;
if (n<menor) menor=n;
par = pares(n);
impar = impares(n);
media = medias(n, total);
}
printf("%d %d %d %d %.6f", maior, menor, par, impar, media);
return 0;
}

