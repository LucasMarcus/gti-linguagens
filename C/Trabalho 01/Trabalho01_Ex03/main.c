#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exerc�cio
/* Fa�a um algoritmo que solicite n�meros do usu�rio, e pare somente quando for
informado o n�mero 0, e por fim imprima a soma de todos os n�meros digitados pelo
usu�rio. */

//Fun��o Principal
int main()
{
    //Variaveis
    int num, soma;
    soma = 0;
    num = 1;

    //T�tulo
    printf("\n\t SOMA DOS NUMEROS DIGITADOS \n\n");

    //La�o Principal
    while(num > 0)
    {
        //Receber Dado
        printf("\n Digite um numero: ");
        scanf("%d", &num);

        //Calcular Soma
        soma = soma + num;
    }

    //Exibir Dados
    printf("\n Soma = %d", soma);

     //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");
    return 0;
}


