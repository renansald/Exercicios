/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 19, exercico 29
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

/* app para calcular a ra�z quadrada pelo met�do de aproxima��p de Newton*/
int main (){
setlocale(LC_ALL, "");
float y,x;
int aux = 1;
printf("Digite o n�mero que deseja calcular a ra�z: ");
scanf("%f", &y);
x = (y /2);
printf("Sua 1� aproxima��o �: %f\n", x);
while(aux < 25){
    x = ((pow(x,2)) + y) / (2 * x);
    aux++;
    printf("Sua %d� aproxima��o �: %f\n", aux, x);
    }
system("pause>>null");
return 0;
}
