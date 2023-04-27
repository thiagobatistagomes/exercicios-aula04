#include <stdio.h>

int main()
{
	char real = 36;
	int kmper, diasalug;
	float priagen, segagen;
	printf("Digite a quantidade de KMs a serem percorridos:\n");
	scanf("%d", &kmper);
	printf("Digite quantos dias pretende alugar o carro:\n");
	scanf("%d", &diasalug);
	priagen = 62 * diasalug + 1.40 * kmper;
	segagen = 80 * diasalug + 1.20 * kmper;
	printf("Primeira agencia: R%c %.2f Segunda agencia: R%c %.2f\n", real, priagen, real, segagen);
	return 0;
}
