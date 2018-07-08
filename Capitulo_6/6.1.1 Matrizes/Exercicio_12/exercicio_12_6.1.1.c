/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 37, exercicio 12
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
srand(time(NULL));
int matrix[3][6], mult;
for (int a = 0; a < 3; a++){
    for (int b = 0; b < 6; b++){
        matrix[a][b] = rand();
        printf("matriz [%d][%d] = %d\t", a, b, matrix[a][b]);
    }
    printf ("\n");
    }
printf ("Informe o multiplicador: ");
scanf ("%d", &mult);
for (int a = 0; a < 3; a++){
    for (int b = 0; b < 6; b++){
        matrix[a][b] = matrix[a][b] * mult;
        printf("matriz [%d][%d] = %d\t", a, b, matrix[a][b]);
    }
    printf ("\n");
    }
return 0;
}
