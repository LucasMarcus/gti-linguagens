#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, h, v;
    printf("Digite o valor do raio da base:\n");
    scanf("%f", &r);
    printf("Digite o valor da altura da lata:\n");
    scanf("%f", &h);
    v = 3,14*r*r*h;
    printf("O volume da lata de oleo e:%f\n", v);
    return 0;
}
