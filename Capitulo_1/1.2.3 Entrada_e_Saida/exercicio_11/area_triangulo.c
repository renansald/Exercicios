/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 10, exercico 11
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para calcular a �rea de um triangulo*/
int main (){
float base, altura, area;
printf("Dugite o valor da base \"b\" do triangulo: ");
scanf("%f", &base);
printf("Digite o valor da altura \"h\" do tri�ngulo: ");
scanf("%f", &altura);
area = (base * altura) / 2;
printf("O triangulo de base %f e altura %f tem como area: %.5f", base, altura, area);
system("pause>>null");
return 0;
}
