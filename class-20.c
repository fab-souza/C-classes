#include <stdio.h>

int main() 
{
  float raio, diametro, circunferencia, area;
  float PI = 3.145;
  printf("Digite o valor do raio (cm): \n");
  scanf("%f", &raio);

  diametro = raio * 2;
  circunferencia = diametro * PI; 
  area = PI * (raio*raio);

  printf("\nCom um círculo de raio %.3f, tem-se: \n", raio);
  printf("\nO diâmetro é de %.3fcm.", diametro);
  printf("\nA circunferência é de %.3fcm.", circunferencia);
  printf("\nE a área é de %.3fcm².", area);
}
