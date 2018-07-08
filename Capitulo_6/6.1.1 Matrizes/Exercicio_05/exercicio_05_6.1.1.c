/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 36, exercicio 5
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main (){
setlocale(LC_ALL, "portuguese");
srand(time(NULL));
int matrix[10][10], somal = 0, somac = 0;
for (int a = 0; a < 10; a++){
    for (int b = 0; b < 10; b++){
        matrix[a][b] = rand()% 11 + 10;
        printf("matriz [%d][%d] = %d\t", a, b, matrix[a][b]);
    }
    printf("\n");
    }
for (int a = 0; a < 10; a++){
    for (int b = 0; b < 10; b++){
            somal = somal + matrix[a][b];
            somac = somac + matrix[b][a];
    }
    printf ("A soma na linha %d é %d\nA soma na coluna %d é %d\n", a+1, somal, a+1, somac);
    somal = somac = 0;
}
return 0;
}
