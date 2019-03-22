#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exercício
/* Faça um programa que receba um número inteiro maior que 1, verifique se o
número fornecido é primo ou não e mostre mensagem de número primo ou de número
não primo.
Um número é primo quando é divisível apenas por 1 e por ele mesmo. */

//Função Principal
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


