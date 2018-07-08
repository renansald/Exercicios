/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 35, exercicio 3
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main (){
setlocale(LC_ALL, "portuguese");
srand(time(NULL));
int matrix[3][6], mult;
for (int a = 0; a < 3; a++){
    for (int b = 0; b < 6; b++){
        matrix[a][b] = rand();
        printf("matriz [%d][%d] = %d\n", a, b, matrix[a][b]);
    }
}
printf("Informe o multiplicador: ");
scanf("%d", &mult);
for (int a = 0; a < 3; a++){
    for (int b = 0; b < 6; b++){
        matrix[a][b] = matrix[a][b] * mult;
        printf("matriz [%d][%d] = %d\n", a, b, matrix[a][b]);
    }
}
return 0;
}
