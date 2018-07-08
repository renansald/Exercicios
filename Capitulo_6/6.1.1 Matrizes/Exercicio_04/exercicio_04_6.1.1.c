/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 36, exercicio 4
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main (){
setlocale(LC_ALL, "portuguese");
srand(time(NULL));
int matrix[4][4], menor, maior, c, C, d, D;
for (int a = 0; a < 4; a++){
    for (int b = 0; b < 4; b++){
        matrix[a][b] = rand()% 15 + 1;
        printf("matriz [%d][%d] = %d\n", a, b, matrix[a][b]);
        if ((a == 0) &&(b == 0)){
            menor = matrix[a][b];
            maior = matrix[a][b];
            c = C = a;
            d = D = b;
        }
        else if(matrix[a][b] < menor){
            menor = matrix[a][b];
            c = a;
            d = b;
        }
        else if (matrix[a][b] > maior){
            maior = matrix[a][b];
            C = a;
            D = b;
        }
        }
}
printf ("O menor valor esta na [%d][%d] que é %d\nO maior valor esta na [%d][%d] que é %d", c, d, menor, C, D, maior);
return 0;
}
