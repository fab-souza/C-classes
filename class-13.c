#include <stdio.h>

main() 
{
  float numx, fim;
  printf("Digite o valor de um lado do quadrado (em metros): \n");
  scanf("%f", &numx);
  fim = numx * numx;
  printf("A área do quadrado é de: %.2f m².", fim);
  
  return 0;
}
