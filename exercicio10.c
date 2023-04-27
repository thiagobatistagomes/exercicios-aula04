#include <stdio.h>

int main()
{
	int tempo_segundos, num_pecas, horas, minutos, segundos;
	printf("Digite a quantidade de peças a serem produzidas: ");
	scanf("%d", &num_pecas);
	tempo_segundos = num_pecas * 17;
	horas = tempo_segundos / 3600;
	tempo_segundos = tempo_segundos % 3600;
	minutos = tempo_segundos / 60;
	segundos = tempo_segundos % 60;
	printf("%d %d %d\n", horas, minutos, segundos);
	return 0;
}
