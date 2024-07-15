/* P1_2016_Q1
criado em: 02/04/2024
autor: leonardo roxo */

#include <stdio.h>

int main ()
{
    int x;
    scanf("%d", &x);
    switch(x)
    {
        case 1: printf("Domingo"); break;
        case 2: printf("Segunda"); break;
        case 3: printf("Terca"); break; 
        case 4: printf("Quarta"); break;
        case 5: printf("Quinta"); break;
        case 6: printf("Sexta"); break;
        case 7: printf("Sabado"); break;
        default: printf("Invalido");
    }
    return 0;
}