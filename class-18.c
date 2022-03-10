#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int a, b, c;
  printf("Digite um número (opção a): \n");
  scanf("%d", &a);

  printf("Digite outro número (opção b): \n");
  scanf("%d", &b);

  printf("Digite o último número (opção c): \n");
  scanf("%d", &c);

  if(a>b && a>c)
  {
    printf("A variável 'a' é o maior número: %d", a);
  }
  else if(b>a && b>c)
  {
    printf("A variável 'b' é o maior número: %d", b);
  }
  else if(c>a && c>b)
  {
    printf("A variável 'c' é o maior número: %d", c);
  }
  return 0;
}
