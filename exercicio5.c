#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	double resp;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &num);
	resp = cbrt(num) + sqrt(sqrt(num));
	printf("Resultado: %.2lf\n", resp);
	return 0;
}
