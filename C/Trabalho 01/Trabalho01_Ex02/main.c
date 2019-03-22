#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exercício
/* Programa que leia um conjunto de números positivos. Imprimir:
A) a soma dos números pares
b) a quantidade de números ímpar
Obs: O flag de saída = (numero <=0). */

//Função Principal
int main()
{
    //Variáveis
    int num, soma, quant;
    soma = quant = 0;
    num = 1;

    //Título
    printf("\n\t SOMA DOS PARES E QUANTIDADE DE IMPARES \n\n");

    //Laço Principal
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


