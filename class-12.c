#include <stdio.h>

main() 
{
  int numx, numy, numz, fim;
  printf("Digite um valor: \n");
  scanf("%d", &numx);
  numy = 3*numx + 1;
  numz = 2*numx - 1;
  fim = numy + numz;
  printf("O triplo do valor mais 1 é de: %d", numy);
  printf("\nO dobro do valor menos 1 é de: %d", numz);
  printf("\nA soma dos dois últimos valores é de: %d", fim);
  return 0;
}
