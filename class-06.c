#include <studio.h>

main()

{
	float celsius, fahrenheit;
	printf("Entre com a temperatura em Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = (celsius * 9/5) + 32.0;
	printf("A temperatura em Fahrenheit é de: %f", fahrenheit);
}
