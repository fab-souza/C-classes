#include <stdio.h>

void main() 
{
  char plano;
  float salarioinicial, salariofinal;
  printf("\nEstes são nossos planos disponíveis: \n\n");
  printf("| Plano |Aumento|\n");
  printf("|   A   |   10% |\n");
  printf("|   B   |   15% |\n");
  printf("|   C   |   20% |\n");

  printf("\nInforme o plano atual do funcionário: \n");
  scanf("%c", &plano);
  printf("Informe o salário atual do funcionário: \nR$");
  scanf("%f", &salarioinicial);

  switch (plano)
    {
      case 'A':
        salariofinal = salarioinicial * 1.1;
        printf("\nO salário atualizado será de: R$%.2f", salariofinal);
        break;

      case 'B':
        salariofinal = salarioinicial * 1.15;
        printf("\nO salário atualizado será de: R$%.2f", salariofinal);
        break;

      case 'C':
        salariofinal = salarioinicial * 1.2;
        printf("\nO salário atualizado será de: R$%.2f", salariofinal);
        break;

      default:
        printf("\nPlano não identificado, tente novamente.");
    }
  
}
