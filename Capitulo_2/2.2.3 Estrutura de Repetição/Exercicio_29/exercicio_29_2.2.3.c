/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 19, exercico 29
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

/* app para calcular a raíz quadrada pelo metódo de aproximaçãp de Newton*/
int main (){
setlocale(LC_ALL, "");
float y,x;
int aux = 1;
printf("Digite o número que deseja calcular a raíz: ");
scanf("%f", &y);
x = (y /2);
printf("Sua 1ª aproximação é: %f\n", x);
while(aux < 25){
    x = ((pow(x,2)) + y) / (2 * x);
    aux++;
    printf("Sua %dª aproximação é: %f\n", aux, x);
    }
system("pause>>null");
return 0;
}
