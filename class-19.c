#include <stdio.h>

int main() 
{
  int numero;
  printf("Digite um número inteiro: \n");
  scanf("%d", &numero);
  if(numero % 2 == 0)
  {
    printf("\nO número escolhido é par.");
  }
  else
  {
    printf("\nO número escolhido é ímpar.");
  }
  return 0;
}
