#include <stdio.h>

int main()
{
	int pdesc;
	float valini, valdesc, valfin;
	char real = 36;
	printf("Digite o valor do produto:\n");
	scanf("%f", &valini);
	printf("Digite a porcentagem de desconto:\n");
	scanf("%d", &pdesc);
	valdesc = valini * pdesc /100;
	valfin = valini - valdesc;
	printf("Valor final: R%c %.2f Valor do desconto: R%c %.2f\n", real, valfin, real, valdesc);
	return 0;
}
