/*L1_8
criado em: 28/03/2024
autor: leonardo roxo*/

#include <stdio.h>

int main () 
{
  char x;
  scanf("%c", &x);
  if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
  {
    printf("Vogal");
  }
  else 
  {
    printf("Nao Vogal");
  }
return 0;
}