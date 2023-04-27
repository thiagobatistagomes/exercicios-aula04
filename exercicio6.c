#include <stdio.h>
#include <math.h>
// como o programa nao verifica se os lados sao validos ( triângulos que satisfazem a desigualdade triangular, ou seja, a soma de quaisquer dois lados deve ser maior que o terceiro lado)alguns testes resultam em zero ou terao resultados equivocados matematicamente. exemplo de teste: 3,4 e 7 resulta em 0
int main()
{
    float a, b, c, p, area;

    printf("Digite as medidas dos lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A area do triangulo e: %.1f", area);

    return 0;
}
