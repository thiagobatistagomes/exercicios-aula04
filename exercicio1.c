#include <stdio.h>

int main()
{
	//char dolar = '$';
	char dolar = 36;
	float valini, cotdol, resp;
	printf("Digite um valor em reais:\n");
	scanf("%f", &valini);
	printf("Digite a cotacao do dolar:\n");
	scanf("%f", &cotdol);
	resp = valini/cotdol;
	printf("Valor convertido para dolares: US%c %.2f \n", dolar, resp);
	return 0;
}
