#include <studio.h>

main()

{
	int numero1, numero2, numero3, fim;
	printf("Entre com três números\n");
	scanf("%d", &numero1);
	scanf("%d", &numero2);
	scanf("%d", &numero3);
	fim = numero1 + numero2 + numero3;
	printf("A soma dos três valores é de: %d", fim);
}
