#include <stdio.h>

main() 
{
  float numx, fim;
  printf("Digite o valor da base do triângulo (em metros): \n");
  scanf("%f", &numx);
  fim = (numx * numx)/2;
  printf("A área do triângulo é de: %.2f m².", fim);
  
  return 0;
}
