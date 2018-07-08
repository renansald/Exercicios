/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 20, exercico 39
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/* realizar somas enquanto o usu�rio desejar e no fim, exibir o resultado total*/
int main()
{
    setlocale(LC_ALL, "");
printf("Adivinhe o n�mero secreto.\nAs �nicas dicas s�o:\n* O n�mero est� no intervalo de 0 � 1000;\n* O jogo ir� dizer se o valor digitado pelo jogador � maior ou menor que o n�mero secreto\n");
    /*declara��o de vari�veis e atribui��o de valores*/
    int valor, player_1, player_2;
    srand(time(NULL));
    valor = (rand () % 1000 + 1);
    printf("%d\n", valor);
    while((player_1 != valor) && (player_2 != valor))
    {

        printf("Primeiro jogador fa�a sua jogada: ");
        scanf("%d", &player_1);

        if (player_1 == valor)
        {
            printf("Parab�ns Jogador 1 voc� venceu\n");
        }
        else if (player_1 > valor)
        {
            printf("O n�mero digitado � maior que o n�mero secreto\n");
            printf("Segundo jogador fa�a sua jogada: ");
            scanf("%d", &player_2);
        }
        else if (player_1 < valor)
        {
            printf("O n�mero digitado � menor que o n�mero secreto\n");
            printf("Segundo jogador fa�a sua jogada: ");
            scanf("%d", &player_2);
        }
        if (player_1 != valor){

        if (player_2 == valor)
        {
            printf("Parab�ns Jogador 2 voc� venceu\n");
        }
        else if (player_2 > valor)
        {
            printf("O n�mero digitado � maior que o n�mero secreto\n");
        }
        else if (player_2 < valor)
        {
            printf("O n�mero digitado � menor que o n�mero secreto\n");
        }
        }

    }
    system("pause>>null");
    return 0;
}
