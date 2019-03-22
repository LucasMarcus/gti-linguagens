#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exercício
/* Faça um sistema que receba um número entre 1 e 30, em seguida imprimir se o número
esta entre 1 e 10, entre 11 e 20 ou entre 21 e 30. */

//Função Principal
int main()
{
    //Variaveis
    int num;

    //Título
    printf("\n\t VERIFICACAO DE NUMERO DIGITADO \n\n");

    //Receber Dado
    printf("\n Digite um Numero de 1 a 30: ");
    scanf("%d", &num);

    //Validar
    while(num <= 0 || num > 30)
    {
        printf("\n Numero Invalido! Digite outro: ");
        scanf("%d", &num);
    }

    //Verificar e Receber Resultado
    if(num >= 1 && num <= 10)
    {
        printf("\n Numero digitado esta em 1 e 10.");
    }
    else if(num >= 11 && num <= 20)
    {
        printf("\n Numero digitado esta em 11 e 20.");
    }
    else if(num >= 21 && num <= 30)
    {
        printf("\n Numero digitado esta em 21 e 30.");
    }

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


