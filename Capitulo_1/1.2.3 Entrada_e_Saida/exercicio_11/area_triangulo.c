/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 10, exercico 11
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para calcular a área de um triangulo*/
int main (){
float base, altura, area;
printf("Dugite o valor da base \"b\" do triangulo: ");
scanf("%f", &base);
printf("Digite o valor da altura \"h\" do triângulo: ");
scanf("%f", &altura);
area = (base * altura) / 2;
printf("O triangulo de base %f e altura %f tem como area: %.5f", base, altura, area);
system("pause>>null");
return 0;
}
