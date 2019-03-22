#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exercício
/* Faça um programa que receba um número, calcule e mostre a tabuada deste
número. */

//Função Principal
int main()
{
    //Variaveis
    int num, cont, aux;
    num = aux = 0;
    cont = 1;

    //Receber Dado
    printf("\n Digite um numero: ");
    scanf("%d", &num);

    //Salvar Numero Digitado
    aux = num;

    //Calcular Tabua e Exibir
    for(cont = 1; cont <= 10; cont++)
    {
        printf("\n %d X %d = %d",aux, cont, num * cont);
        //cont = cont + 1;
    }

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


