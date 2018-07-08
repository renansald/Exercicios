/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 36, exercicio 11
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
srand(time(NULL));
int matrix[3][4], soma = 0;
for (int a = 0; a < 3; a++){
    for (int b = 0; b < 4; b++){
        matrix[a][b] = rand();
        printf("matriz [%d][%d] = %d\t", a, b, matrix[a][b]);
        soma = soma + matrix[a][b];
    }
    printf ("\n");
    }
    printf ("\n A soma da Matriz e: %d", soma);
return 0;
}
