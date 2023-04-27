#include <stdio.h>

int main()
{
	char porc = 37;
	float ch, hf, resp;
	printf("Digite a carga horaria total da disciplina:\n");
	scanf("%f", &ch);
	printf("Digite a quantidade horas de faltas acumuladas:\n");
	scanf("%f", &hf);
	resp = (hf / ch) * 100;
	printf("Porcentagem de faltas do aluno: %.2f%c\n", resp, porc);
	return 0;
}
