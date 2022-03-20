#include <stdio.h>

main() 
{
  float base, altura, fim;
  printf("Digite o valor da base do triângulo (em metros): \n");
  scanf("%f", &base);
  printf("Digite o valor da altura do triângulo (em metros): \n");
  scanf("%f", &altura);
  fim = (base * altura)/2;
  printf("A área do triângulo é de: %.2f m².", fim);
  
  return 0;
}
