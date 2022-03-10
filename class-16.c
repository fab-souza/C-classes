#include <stdio.h>

int main() 
{
  int idade, restante;
  printf("Digite a idade da pessoa: ");
  scanf("%d", &idade);
  if(idade >= 18)
  {
    restante = idade - 18;
    printf("A pessoa tem direito a habilitação à %d anos.", restante);
  }
  else if (idade <=18)
  {
    restante = 18 - idade;
    printf("Faltam %d anos para a pessoa poder tirar a habilitação.", restante);
  }
  
  return 0;
}
