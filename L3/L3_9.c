#include <stdio.h>

#define NEUTRO 0
#define ACIDO 1
#define BASICO 2

int verificapH (float pH);
int verificaGotaChuvaAcida (float pH);
float porcentagem(float total, float valor);
void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal);
float modulo (float n);

int main ()
{
    int A,D,T;
    float P;  
    int qtdacidas=0,qtdbasicas=0,qtdneutras=0;
    int temp=1;
    float macido=15,mbasico=-1,mneutro=15;
    float porcentagemGotasChuvaAcida,porcentagemGotasChuvaNormal;
    int neutras=0,acidas=0,basicas=0;

    scanf("%d %d %d\n", &A, &D, &T);
   
    while(scanf("%f", &P) == 1)
    {
        
        
        if (P < macido) macido = P;
        if (P > mbasico) mbasico = P;
        if ((temp == 1)||(modulo(P-7) < modulo(mneutro-7))) mneutro = P;
    
        switch(verificaGotaChuvaAcida(P))
        {
            case 0: qtdneutras++; break;
            case 1: qtdacidas++; break;
            case 2: qtdbasicas++; break;
        }

        switch(verificapH(P))
        {
            case 0: neutras++; break;
            case 1: acidas++; break;
            case 2: basicas++; break;
        }

        temp--;
    }
    
    if (temp == 1) 
    {
        printf("Nenhuma gota foi avaliada");
        return 0;
    }

    porcentagemGotasChuvaAcida = porcentagem(qtdneutras+qtdacidas+qtdbasicas,qtdacidas);
    porcentagemGotasChuvaNormal = 100 - porcentagemGotasChuvaAcida;

    printf("%d %d %d %.2f %.2f %.2f\n", acidas, basicas, neutras, macido, mbasico, mneutro);

    imprimeResultadosAnalise(porcentagemGotasChuvaAcida,porcentagemGotasChuvaNormal);
}

int verificapH (float pH)
{
    if (pH == 7) return NEUTRO;
    if (pH < 7) return ACIDO;
    if (pH > 7) return BASICO;
}

int verificaGotaChuvaAcida (float pH)
{
    if (pH < 5.7) return ACIDO;
    else return NEUTRO;
}

float porcentagem(float total, float valor)
{
    return valor/total*100;
}

float modulo (float n)
{
    if (n < 0) return -n;
    else return n;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal)
{
    char c = '%';
    if (porcentagemGotasChuvaAcida >= 75) printf("Chuva Acida");
    else if (porcentagemGotasChuvaNormal >= 75) printf("Chuva Normal");
    else printf("Chuva com indicios de chuva acida");
    printf(" %.2f%c %.2f%c", porcentagemGotasChuvaAcida, c, porcentagemGotasChuvaNormal, c);
}
