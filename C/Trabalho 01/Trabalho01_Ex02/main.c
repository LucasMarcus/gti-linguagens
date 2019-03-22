#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exerc�cio
/* Programa que leia um conjunto de n�meros positivos. Imprimir:
A) a soma dos n�meros pares
b) a quantidade de n�meros �mpar
Obs: O flag de sa�da = (numero <=0). */

//Fun��o Principal
int main()
{
    //Vari�veis
    int num, soma, quant;
    soma = quant = 0;
    num = 1;

    //T�tulo
    printf("\n\t SOMA DOS PARES E QUANTIDADE DE IMPARES \n\n");

    //La�o Principal
    while(num > 0)
    {
        //Receber Dado
        printf("\n Digite um numero positivo: ");
        scanf("%d", &num);
        while(num < 0)
        {
            printf("\n Numero Invalido! Digite novamente: ");
            scanf("%d", &num);
        }

        //Verificar Resultados
        if(num % 2 == 0)
        {
            soma = soma + num;
        }
        if(num % 2 == 1)
        {
            quant = quant + 1;
        }
    }

    //Exibir Resultados
    printf("\n Soma dos Pares = %d", soma);
    printf("\n Quantidade dos Impares = %d", quant);

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


