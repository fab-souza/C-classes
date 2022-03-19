#include <stdio.h>

int main() 
{
  int contador, vetor[10], numero;
  printf("\n\nDigite 10 números: \n");
  for(contador=0; contador<=9; contador++)
    {
      scanf("%d", &vetor[contador]);
    }
  for(contador=0; contador<=9; contador++)
    {
      printf("\nOs números são: \n\t%d", vetor[contador]);
    }

}
