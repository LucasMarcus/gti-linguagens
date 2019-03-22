#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exercício
/* Faça um algoritmo que solicite números do usuário, e pare somente quando for
informado o número 0, e por fim imprima a soma de todos os números digitados pelo
usuário. */

//Função Principal
int main()
{
    //Variaveis
    int num, soma;
    soma = 0;
    num = 1;

    //Título
    printf("\n\t SOMA DOS NUMEROS DIGITADOS \n\n");

    //Laço Principal
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


