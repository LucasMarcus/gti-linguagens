#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exerc�cio
/* )Crie um sistema que exiba um menu para o usu�rio (1-Cadastro, 2-Consultar, 3-Sair).
Feito isso, leia a op��o do usu�rio e imprima a op��o selecionada. Caso seja digitada
uma op��o invalida, o sistema deve exibir o menu novamente. */

//Fun��o Principal
int main()
{
    //Variaveis
    int opcao;
    opcao = 0;

    //MENU
    printf("\n\t MENU DE OPCOES \n\n");
    printf("\n\t 1- Cadastro");
    printf("\n\t 2- Consultar");
    printf("\n\t 3- Sair");

    //Receber Opcao
    printf("\n\n Digite a Opcao Desejada: ");
    scanf("%d", &opcao);

    //Validar Opcao
    while(opcao < 1 || opcao > 3)
    {
        //Limpa Tela
        system("cls");

        printf("\n\t MENU DE OPCOES \n\n");
        printf("\n\t 1- Cadastro");
        printf("\n\t 2- Consultar");
        printf("\n\t 3- Sair");

        //Receber Op��o
        printf("\n\n Digite a Opcao Desejada: ");
        scanf("%d", &opcao);
    }

    switch(opcao)
    {
        case 1: printf("\n\t CADASTRO");
                break;
        case 2: printf("\n\t CONSULTAR");
                break;
        case 3: printf("\n\t SAIR");
                break;
    }



    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


