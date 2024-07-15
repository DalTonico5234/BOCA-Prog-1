#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

typedef struct {
int codigo;
float preco;
int qtd;
} tProduto;

tProduto LeProduto()
{
  tProduto product;
  scanf("%d;%f;%d\n", &product.codigo, &product.preco, &product.qtd);
  return product;
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2)
{
  if (p1.preco > p2.preco) return VERDADEIRO;
  else return FALSO;
}

int EhProduto1MenorQ2(tProduto p1, tProduto p2)
{
  if (p1.preco < p2.preco) return VERDADEIRO;
  else return FALSO;
}

int TemProdutoEmEstoque(tProduto p)
{
  if (p.qtd) return VERDADEIRO;
  else return FALSO;  
}

void ImprimeProduto(tProduto p)
{
  printf("COD %d, PRE %.2f, QTD %d\n", p.codigo, p.preco, p.qtd);
}

void main ()
{
  int n,i, temp=1,temp2=1;
  tProduto product, tmenor, tmaior;
  scanf("%d\n", &n);
  for (i = 1; i <= n; i++)
  {
    product = LeProduto();
    if (!(TemProdutoEmEstoque(product))) 
    {
      printf("FALTA:");
      ImprimeProduto(product);
    }
    if (temp == 1 || EhProduto1MaiorQ2(product, tmaior))
    {
      tmaior = product;
      temp--;
    }
    if (temp2 == 1 || EhProduto1MenorQ2(product,tmenor))
    {
      tmenor = product;
      temp2--;
    }
  }
  
  printf("MAIOR:");
  ImprimeProduto(tmaior);

  printf("MENOR:");
  ImprimeProduto(tmenor);

}