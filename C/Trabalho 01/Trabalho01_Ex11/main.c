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
    aux = 1;
    num = 1;
    cont = 1;

    //Laço Principal
    for(num = 1; num <= 10; num++)
    {
        //Título
        printf("\n\t Tabua de %d \n", aux);

        //Calcular e Exibir Resultado
        for(cont = 1; cont <= 10; cont++)
        {
            printf("\n %d X %d = %d",aux, cont, num * cont);
        }
        printf("\n\n");
        aux = num + 1;

        //Pausar e Limpar a Tela
        system("pause");
        system("cls");
    }

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


