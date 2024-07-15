#include <stdio.h>

float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Divisao(float num1, float num2);
float Multiplicacao(float num1, float num2);

int main()
{
  char op;
  float num1, num2;
  float result;
  scanf("%f ", &num1);
  result = num1;
  while ( scanf("%f %c", &num2, &op) == 2)
  {
    if (op == '+') result = Soma(result, num2);
    else if (op == '-') result = Subtracao(result, num2);
    else if (op == '/') result = Divisao(result, num2);
    else if (op == '*') result = Multiplicacao(result, num2);
    else if (op == 32) break;
  }
  printf("%.2f", result);
  return 0;
}

float Soma(float num1, float num2)
{
  return num1 + num2;
}

float Subtracao(float num1, float num2)
{
  return num1 - num2;
}

float Divisao(float num1, float num2)
{
  return num1 / num2;
}

float Multiplicacao(float num1, float num2)
{
  return num1 * num2;
}



