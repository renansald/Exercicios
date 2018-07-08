/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 20, exercico 39
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/* realizar somas enquanto o usuário desejar e no fim, exibir o resultado total*/
int main()
{
    setlocale(LC_ALL, "");
printf("Adivinhe o número secreto.\nAs únicas dicas são:\n* O número está no intervalo de 0 à 1000;\n* O jogo irá dizer se o valor digitado pelo jogador é maior ou menor que o número secreto\n");
    /*declaração de variáveis e atribuição de valores*/
    int valor, player_1, player_2;
    srand(time(NULL));
    valor = (rand () % 1000 + 1);
    printf("%d\n", valor);
    while((player_1 != valor) && (player_2 != valor))
    {

        printf("Primeiro jogador faça sua jogada: ");
        scanf("%d", &player_1);

        if (player_1 == valor)
        {
            printf("Parabéns Jogador 1 você venceu\n");
        }
        else if (player_1 > valor)
        {
            printf("O número digitado é maior que o número secreto\n");
            printf("Segundo jogador faça sua jogada: ");
            scanf("%d", &player_2);
        }
        else if (player_1 < valor)
        {
            printf("O número digitado é menor que o número secreto\n");
            printf("Segundo jogador faça sua jogada: ");
            scanf("%d", &player_2);
        }
        if (player_1 != valor){

        if (player_2 == valor)
        {
            printf("Parabéns Jogador 2 você venceu\n");
        }
        else if (player_2 > valor)
        {
            printf("O número digitado é maior que o número secreto\n");
        }
        else if (player_2 < valor)
        {
            printf("O número digitado é menor que o número secreto\n");
        }
        }

    }
    system("pause>>null");
    return 0;
}
