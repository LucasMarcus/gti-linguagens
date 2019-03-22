#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, s;

    printf("Digite o primeiro valor:");
    scanf("%d", &a);

    printf("Digite o segundo valor:\n");
    scanf("%d", &b);

    printf("Digite o terceiro valor:\n");
    scanf("%d", &c);

    printf("Digite o quarto valor:\n");
    scanf("%d", &d);

    printf("Digite o quinto valor:\n");
    scanf("%d", &e);

    s = a+b+c+d+e;

    printf("O valor da soma e:%d\n", s);
    return 0;
}
