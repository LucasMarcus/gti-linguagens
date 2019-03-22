#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

/* Faça um programa que apresente o menu a seguir, permita ao usuário escolher a
opção desejada, receba os dados necessários para executar a operação e mostre o
resultado. Verifique a possibilidade de opção inválida e não se preocupe com restrições,
como salário negativo.
1. Menu de opções:
a) IMPOSTO
b) NOVO SALÁRIO
c) CLASSIFICAÇÃO
DIGITE A OPÇÃO DESEJADA
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto
usando as regras a seguir:
SALÁRIO % DO IMPOSTO
Menor que R$500,00 5%
De R$ 500,00 a R$ 850,00 10%
Acima de R$850,00 15%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo
salário, usando as regras a seguir:
SALÁRIO AUMENTO
Maior que R$1500,00 R$ 25,00
De R$ 750,00(inclusive) a R$ 1500,00
(inclusive)
R$ 50,00
De R$450,000(inclusive) a R$ 750,00 R$ 75,00
Menor que 450,00 R$ 100,00
Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando a
tabela a seguir:
SALÁRIO CLASSIFICAÇÃO
Até R$ 700,00 (inclusive) Mal remunerado
Maiores que R$ 700,00 Bem remunerado */

//Função Principal
int main()
{
    //Variaveis
    int opcao;
    float salario, novo_salario;
    opcao = salario = novo_salario = 0;

    //MENU
    printf("\n\t MENU DE OPCOES \n");
    printf("\n\t 1: Imposto");
    printf("\n\t 2: Novo Salario");
    printf("\n\t 3: Classificacao");

    //Receber Opcao
    printf("\n\n Digite o numero da Opcao desejada: ");
    scanf("%d", &opcao);
    system("cls");

    switch(opcao)
    {
        case 1: printf("\n\t IMPOSTO \n\n");

                //Receber Salario
                printf("\n Digite o Salario: ");
                scanf("%f", &salario);

                //Varificar, Calcular e exibir Resultado
                if(salario <= 500)
                {
                    printf("\n Imposto = %.2f", salario * 0.05);
                }
                if(salario > 500 && salario <= 850)
                {
                     printf("\n Imposto = %.2f", salario * 0.1);
                }
                if(salario > 850)
                {
                     printf("\n Imposto = %.2f", salario * 0.15);
                }
                break;

        case 2: printf("\n\t NOVO SALARIO \n\n");

                //Receber Salario
                printf("\n Digite o Salario: ");
                scanf("%f", &salario);

                //Verificar, Calcular e Exibir Aumento
                if(salario > 1500)
                {
                    printf("\n Novo Salario = %.2f", salario + 25);
                }
                if(salario >= 750 && salario <= 1500)
                {
                    printf("\n Novo Salario = %.2f", salario + 50);
                }
                if(salario >= 450 && salario < 750)
                {
                    printf("\n Novo Salario = %.2f", salario + 75);
                }
                if(salario < 450)
                {
                    printf("\n Novo Salario = %.2f", salario + 100);
                }
                break;

        case 3: printf("\n\t CLASSIFICACAO \n\n");

                //Receber Salario
                printf("\n Digite o Salario: ");
                scanf("%f", &salario);

                //Verificar, Calcular e Exibir Classificação
                if(salario <= 700)
                {
                    printf("\n Mal Remunerado.");
                }
                else
                {
                    printf("\n Bem Remunerado.");
                }
                break;

        default: printf("\n Opcao Invalida!");
    }

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


