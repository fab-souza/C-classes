#include <stdio.h>

float main() 
{
  float nota1, nota2, frequencia, media;
  printf("Digite a primeira nota do aluno: \n");
  scanf("%f", &nota1);
  
  printf("\nDigite a segunda nota do aluno: \n");
  scanf("%f", &nota2);
  
  printf("\nDigite o valor equivalente a porcentagem de frequência registrada pelo aluno: \n");
  scanf("%f", &frequencia);
  
  media = (nota1 + nota2) / 2;
  
  if(media>=7 && frequencia>75)
  {
    printf("\nMedia suficiente e frequência OK.");
    printf("\nPassou de ano.");
  }
  else if(media<=7 || frequencia<75)
  {
    printf("\nMedia insuficiente ou frequência baixa.");
    printf("\nReprovou...");
  }
  
  return 0;
}
