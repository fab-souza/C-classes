#include <stdio.h>

int main() 
{
  int contador, vetor[9], numero, soma=0;
  printf("\n\nDigite 10 números: \n");
  for(contador=0; contador<=9; contador++)
    {
      scanf("%d", &vetor[contador]);
    }
  for(contador=0; contador<=9; contador++)
    {
      printf("\n\t%d", vetor[contador]);
      soma=soma+vetor[contador];
    }
  printf("\nA soma dos valores deu: %d", soma);
  return 0;
}
