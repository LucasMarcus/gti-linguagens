#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exerc�cio
/* Fa�a um programa que receba um n�mero inteiro maior que 1, verifique se o
n�mero fornecido � primo ou n�o e mostre mensagem de n�mero primo ou de n�mero
n�o primo.
Um n�mero � primo quando � divis�vel apenas por 1 e por ele mesmo. */

//Fun��o Principal
int main()
{
    //Variaveis
    int num, cont, aux;
    num = aux = 0;

    //Receber Dado
    printf("\n Digite um Numero Inteiro: ");
    scanf("%d", &num);

    //Calcular Primo
    for(cont = 1; cont <= num; cont++)
    {
        if(num % cont == 0)
        {
            aux = aux + 1;
        }
    }

    //Verificar e Exibir Resultado
    if(aux == 2)
    {
        printf("\n Numero Primo.");
    }
    else
    {
        printf("\n Numero nao e Primo.");
    }

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


