#include <stdio.h>
#include <stdlib.h>

void main ()
{
  int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11;
  int num1,num2,num3,num4;
  int v1,v2;
  
  scanf("%d.%d.%d-%d", &num1, &num2, &num3, &num4); //123
 
  n1 = (num1 / 100); //1
  n2 = (num1 /10)% 10; //2
  n3 = (num1 % 10); //3
  n4 = (num2 / 100);
  n5 = (num2 / 10)% 10;
  n6 = (num2 % 10);
  n7 = (num3 / 100);
  n8 = (num3 / 10)%10;
  n9 = (num3 % 10);
  n10 = (num4 / 10);
  n11 = (num4 % 10);
  
  v1 =  (n1 * 10 + n2 * 9 + n3 * 8 + n4 * 7 + n5 * 6 + n6 * 5 + n7 * 4 + n8 * 3 + n9 * 2) % 11;
  if (v1 < 2) v1 = 0;
  if (v1 >= 2) v1 = 11 - v1;

  v2 = (n1 * 11 + n2 * 10 + n3 * 9 + n4 * 8 + n5 * 7 + n6 * 6 + n7 * 5 + n8 * 4 + n9 * 3 + v1 * 2) % 11;
  if (v2 < 2) v2 = 0;
  if (v2 >= 2) v2 = 11 - v2;
  
  if (n1 == n2 && n2 == n3 && n3 == n4 && n4 == n5 && n5 == n6 && n6 == n7 && n7 == n8 && n8 == n9 && n9 == n10 && n10 == n11) printf("CPF invalido: digitos iguais!");
  else if (v1 != n10 && v2 != n11) printf("CPF invalido: dois digitos!");
  else if (v1 != n10) printf("CPF invalido: primeiro digito!");
  else if (v2 != n11) printf("CPF invalido: segundo digito!");
  else printf("CPF valido!");
}