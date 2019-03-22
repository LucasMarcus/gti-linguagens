#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exercício
// Faça um programa que receba dois números e mostre o MAIOR.

//Função Principal
int main()
{
    //Variaveis
    int num1, num2;
    num1 = num2 = 0;

    //Título
    printf("\n\t VERIFICAR QUAL NUMERO E MAIOR \n\n");

    //Receber Dado
    printf("\n Digite o Primeiro Numero: ");
    scanf("%d", &num1);

    printf("\n Digite o segundo Numero: ");
    scanf("%d", &num2);

    //Varificar qual é Maior e Exibir
    if(num1 > num2)
    {
        printf("\n O Primeiro numero e maior que o Segundo.");
    }
    if(num2 > num1)
    {
        printf("\n O Segundo numero e maior que o Primeiro.");
    }
    if(num1 == num2)
    {
        printf("\n Os Numeros sao Iguais.");
    }

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


