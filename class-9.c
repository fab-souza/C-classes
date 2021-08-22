#include <stdio.h>

main()

{
	float notax, notay, notaz, notaa, media;
	printf("Digite a primeira nota: \n");
	scanf("%f", &notax);
	printf("Digite a segunda nota: \n");
	scanf("%f", &notay);
	printf("Digite a terceira nota: \n");
	scanf("%f", &notaz);
	printf("Digite a última nota: \n");
	scanf("%f", &notaa);
	media = (notax + notay + notaz + notaa)/4;
	printf("A média das notas é: %.2f", media);
}