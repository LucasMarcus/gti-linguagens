#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, l, a, v;
    printf("Digite o valor do comprimento:\n");
    scanf("%f", &c);
    printf("Digite o valor da largura:\n");
    scanf("%f", &l);
    printf("Digite o valor da altura:\n");
    scanf("%f", &a);
    v = c*l*a;
    printf("O volume da caixa e:%f\n", v);
    return 0;
}
