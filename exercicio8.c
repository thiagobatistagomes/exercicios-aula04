#include <stdio.h>
#include <math.h>

int main()
{
	float r, h, volume;
	printf("Digite o valor do raio:\n");
	scanf("%f", &r);
	printf("Digite o valor da altura:\n");
	scanf("%f", &h);
	volume = M_PI * pow(r, 2) * h;
	printf("O volume do cilindro e: %.2f\n", volume);
	return 0;
}	
