#include <stdio.h>
#include <math.h>
//Para o uso das funcoes seno, consseno e tangente, o angulo informado deve ser convertido para radianos
int main()
{
	double anggraus, rad, seno, cosseno, tangente;
	printf("Digite o angulo em graus:\n");
	scanf("%lf", &anggraus);
	rad = anggraus * M_PI / 180;
	seno = sin(rad);
	cosseno = cos(rad);
	tangente = tan(rad);
	printf("Seno: %.2lf Cosseno: %.2lf Tangente: %.2lf\n", seno, cosseno, tangente);
	return 0;
}

