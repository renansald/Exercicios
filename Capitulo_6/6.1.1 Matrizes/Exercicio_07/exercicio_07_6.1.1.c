/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 36, exercicio 7
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main (){
setlocale(LC_ALL, "portuguese");
srand(time(NULL));
int matrix[4][4], a, b, somal, somac, maior, menor, l, c;
somal = somac = 0;
for (a = 0; a < 4; a++){
    for (b = 0; b < 4; b++){
        matrix[a][b] = rand()% 11 + 0;
        printf("matriz [%d][%d] = %d\t", a, b, matrix[a][b]);
    }
    printf("\n");
}
    for (a = 0; a < 4; a++){
    for (b = 0; b < 4; b++){
    somal = somal + matrix[a][b];
    somac = somac + matrix[b][a];
    }
    if (a == 0){
        menor = somal;
        maior = somac;
        l = c = 0;
    }
    else if (somal < menor){
            l = a;
    }
    if (somac > maior){
        c = a;
    }
    somal = 0;
    somac = 0;
    }
printf ("A menor soma esta na linha %d\nA maior soma esta na coluna %d", l, c);
return 0;
}
