#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, e, f, m;
    printf("Digite o primeiro valor:\n");
    scanf("%f", &a);
    printf("Digite o segundo valor:\n");
    scanf("%f", &b);
    printf("digite o terceiro valor:\n");
    scanf("%f", &c)/
    printf("Digite o quarto valor:\n");
    scanf("%f", &d);
    printf("Digite o quinto valor:\n");
    scanf("%f", &e);
    printf("Digite o sexto valor:\n");
    scanf("%f", &f);
    m = (a+b+c+d+e+f)/6;
    printf("A media e:%.1f\n", m);
    return 0;
}
