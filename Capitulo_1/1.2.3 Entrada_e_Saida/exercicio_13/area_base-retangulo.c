/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 10, exercico 13
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para calcular a area e perimetro de um retangulo*/
int main (){
float base, altura, area;
printf("Digite a base do seu retangulo:");
scanf("%f", &base);
printf("Digite a altura do seu retangulo:");
scanf("%f", &altura);
area = base * altura;
base = (2 * base) + (2 * altura);
printf("A area do seu retangulo e %.2f\nE o perimetro do seu retangulo e %.2f", area, base);
system("pause>>null");
return 0;
}
