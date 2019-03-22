#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//Exercício
/* )Faça um algoritmo para calcular o resultado da eleição para presidente de turma. Cada
candidato possui um número que é o id do candidato:
1. Lucas 2. Yuri 3. Maria
O flag de saída se dará quando o id fornecido for igual ou inferior a zero:
No final, informe a quantidade de votos de cada candidato. */

//Função Principal
int main()
{
    //Variaveis
    int voto, lucas, yuri, maria;
    lucas =  yuri = maria = 0;

    //Título
    printf("\n\t ELEICAO PARA PRESIDENTE DE TURMA \n\n");

    //Exibir Candidado e seu número
    printf("\n Candidatos: ");
    printf("\n 1: Lucas");
    printf("\n 2: Yuri");
    printf("\n 3: Maria");

    //Laço Principal
    while(voto > 0)
    {
        printf("\n\n Digite o Numero do candidato desejado: ");
        scanf("%d", &voto);
        if(voto == 1)
        {
            lucas = lucas + 1;
        }
        else if(voto == 2)
        {
            yuri = yuri + 1;
        }
        else if(voto == 3)
        {
            maria = maria + 1;
        }
    }

    //Exibir Resultados
    printf("\n Resultados: ");
    printf("\n Lucas = %d votos.", lucas);
    printf("\n Yuri = %d votos.", yuri);
    printf("\n Maria = %d votos.", maria);

    //Fim
    printf("\n\n THE END!");

    //Assinatura
    printf("\n\n====================");
    printf("\n\n *Vinicius Bilaya* \n");
    printf("\n====================");

    return 0;
}


