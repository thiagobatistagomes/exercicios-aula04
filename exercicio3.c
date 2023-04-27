#include <stdio.h>

int main()
{
	int peso, gotas;
	printf("Digite o peso da crianca:\n");
	scanf("%d", &peso);
	gotas = peso/2 * 5;
	printf("Quantidade de gotas a ser ministrada: %d\n", gotas);
	return 0;
}
