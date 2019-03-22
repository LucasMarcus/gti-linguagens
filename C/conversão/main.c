#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Digite o valor em celsius\n");
    scanf("%f", &c);
    f = (9*c+160)/5;
    printf("O valor em Farenheit e:%f\n", f);
    return 0;
}
