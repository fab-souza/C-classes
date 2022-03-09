#include <stdio.h>

main()

{
	float numx, numy, numz, x, y, z, fim;
	printf("Digite o primeiro valor: \n");
	scanf("%f", &numx);
	printf("Digite o segundo valor: \n");
	scanf("%f", &numy);
	printf("Digite o terceiro valor: \n");
	scanf("%f", &numz);
	x = numx * numx;
	y = numy * numy;
	z = numz * numz;
	fim = x + y + z;
	printf("A soma dos quadrdos dos três valores é: %.2f", fim);
}
