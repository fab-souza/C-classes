#include <stdio.h>

int main() 
{
  int contador=1;
  float nota1, nota2, nota3, media;
  char nome[30];
  while(contador<5)
    {
      printf("\nEntre com o nome do alun@: \n");
      scanf("%s", &nome);
      printf("\nDigite a nota 1 (de 0 à 10): \n");
      scanf("%f", &nota1);
      printf("\nDigite a nota 2 (de 0 à 10): \n");
      scanf("%f", &nota2);
      printf("\nDigite a nota 3 (de 0 à 10): \n");
      scanf("%f", &nota3);
      media=(nota1+nota2+nota3)/3;
      printf("\nCom a média de %.2f", media);

      if(media >= 7.0)
      {
        printf("\nAlun@: %s, passou de ano.\n", nome);
      }
      else if(media >= 5.0 && media < 7.0)
      {
        printf("\nAlun@: %s, está de recuperação.\n", nome);
      }
      else
      {
        printf("\nAlun@: %s, reprovou.\n", nome);
      }
      contador++;
    }
  return 0;
}
