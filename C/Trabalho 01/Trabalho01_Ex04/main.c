#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exercício
/* Faça um algoritmo que receba a idade de diversas pessoas e exiba: Total de indivíduos
menor de idade, e o total maior de idade. O programa termina quando idade for =-1. */

//Função Principal
int main()
{
    //Variaveis
    int idade, quant_menor, quant_maior;
    idade = quant_menor = quant_maior = 0;

    //Título
    printf("\n\t QUANTIDADE DE PESSOAS MAIORES E MENORES DE IDADE \n\n");

    //Laço Principal
    while(idade != -1)
    {
        //Receber Dado
        printf("\n Digite a Idade: ");
        scanf("%d", &idade);

        //Verificar e Calcular
        if(idade < 18)
        {
            quant_menor = quant_menor + 1;
        }
        else
        {
            quant_maior = quant_maior + 1;
        }
    }

    //Mostrar Resultado
    printf("\n Menores de idade: %d", quant_menor - 1);
    printf("\n Maiores de idade: %d", quant_maior);


    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


