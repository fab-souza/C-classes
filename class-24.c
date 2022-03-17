#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int codigo;
  char categoria;
  printf("\n============================================");
  printf("\n|         Tabela       de      produtos    |\n");
  printf("============================================\n");
  printf("| Código |                   Classificação |\n");
  printf("|   01   |            Alimento ñ perecível |\n");
  printf("|   02   |              Alimento perecível |\n");
  printf("|   03   |              Alimento perecível |\n");
  printf("|   04   |              Alimento perecível |\n");
  printf("|   05   |                       Vestuário |\n");
  printf("|   06   |                       Vestuário |\n");
  printf("|   07   |                 Higiene pessoal |\n");
  printf("|   08   | Limpeza e utensílios domésticos |\n");
  printf("|   09   | Limpeza e utensílios domésticos |\n");
  printf("|   10   | Limpeza e utensílios domésticos |\n");
  printf("|   11   | Limpeza e utensílios domésticos |\n");
  printf("|   12   | Limpeza e utensílios domésticos |\n");
  printf("|   13   | Limpeza e utensílios domésticos |\n");
  printf("|   14   | Limpeza e utensílios domésticos |\n");
  printf("|   15   | Limpeza e utensílios domésticos |\n");
  printf("| Outros |                 Código inválido |\n");
  printf("============================================\n\n");

  printf("Digite um código: \n");
  scanf("%d", &codigo);
  switch(codigo)
    {
      case 1:
      printf("\nA classificação é de: \n");
      printf("Alimentação não perecível");
      break;
      case 2:
      case 3:
      case 4:
      printf("\nA classificação é de: \n");
      printf("Alimentação perecível");
      break;
      case 5:
      case 6:
      printf("\nA classificação é de: \n");
      printf("Vestuário");
      break;
      case 7:
      printf("\nA classificação é de: \n");
      printf("Higiene pessoal");
      break;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      printf("\nA classificação é de: \n");
      printf("Limpeza e utensílios domésticos");
      break;
      default:
      printf("\nCategoria inválida!\n");
      break;
    }
  return 0;
}
