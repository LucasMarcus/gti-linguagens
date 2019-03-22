#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exerc�cio
/* A nota final de um estudante � calculada a partir de 3 notas atribu�das,
respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame
final. A m�dia das 3 notas mencionadas obedece aos pesos a seguir:
NOTA PESO
Trabalho em laborat�rio 2
Avalia��o semestral 3
Exame final 5
Fa�a um programa que receba as 3 notas, calcule e mostre a m�dia ponderada e o
conceito que segue a tabela. */

//Fun��o Principal
int main()
{
    //Variaveis
    float nota1, nota2, nota3, media;
    nota1 = nota2 = nota3 = media = 0;

    //T�tulo
    printf("\n\t MEDIA PONDERADA E CONCEITO \n\n");

    //Exibir Peso das Notas
    printf("\n Peso das notas: \n");
    printf("\n Trabalho em Laboratorio = 2");
    printf("\n Avalicao Semestral = 3");
    printf("\n Exame Final = 5");

    //Receber Dados
    printf("\n\n Nota do Trabalho em Laboratorio: ");
    scanf("%f", &nota1);

    printf("\n Nota do Avalicao Semestral: ");
    scanf("%f", &nota2);

    printf("\n Nota do Exame Final: ");
    scanf("%f", &nota3);

    //Caluclar Media Ponderada e Exibir
    media = ((nota1*2) + (nota2*3) + (nota3*5)) / 10;
    printf("\n Media = %.2f", media);

    //Verificar e Exibir Resultado
    if(media >= 8 )
    {
        printf("\n Conceito A.");
    }
    if(media >= 7 && media < 8)
    {
        printf("\n Conceito B.");
    }
    if(media >= 6 && media < 7)
    {
        printf("\n Conceito C.");
    }
    if(media >= 5 && media < 6)
    {
        printf("\n Conceito D.");
    }
    if(media < 5)
    {
        printf("\n Conceito E.");
    }

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


