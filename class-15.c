#include <stdio.h>

int main() 
{
  int a, b, soma;
  printf("Digite um número inteiro: \n");
  scanf("%d", &a);
  printf("Digite outro número inteiro: \n");
  scanf("%d", &b);
  
  soma = a + b;
  printf("\nO valor da soma é de: %d", soma);

  if(soma > 10);
  {
    printf("\n\nA soma destes valores é maior do que 10.");
  }
  
  return 0;
}
