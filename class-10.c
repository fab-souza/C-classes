#include <stdio.h>

main()

{
	float real, dolar, cotacao;
	printf("Digite o valor em reais: \n");
	scanf("%f", &real);
	printf("Digite o valor da cotação atual do dólar: \n");
	scanf("%f", &dolar);
	cotacao = (real/dolar);
	printf("O valor correspondente em dólar é de: %.2f", cotacao);
}