/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 36, exercicio 6
*/

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");
int matriz[5][5], somadp, somal4, somads, somac2, b, a;
somadp = somal4 = somads = somac2 = 0;
for(a = 0; a < 5; a++){
    for (b = 0; b < 5; b++){
        printf("Informe a matrix[%d][%d]: ", a, b);
        scanf ("%d", &matriz[a][b]);
    }
    printf("\n");
}
b = 4;
for(a = 0; a < 5; a++){
    somadp = somadp + matriz[a][a];
    somal4 = somal4 + matriz[3][a];
    somac2 = somac2 + matriz[a][1];
    somads = somads + matriz[b][b];
    b--;
}
printf ("a soma da diagonal principal é: %d\nA soma da linha 4 é: %d\n a soma da coluna 2 é: %d\nA soma da diagonal secudaria é: %d", somadp, somal4, somac2, somads);
return 0;
}
