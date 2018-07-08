/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 10, exercico 15
*/

/* Bibilotecas*/
#include <stdio.h>
#include <math.h>

/* app para calcular a área e perimetro de um triangulo a partir de 3 lados*/
int main (){
float a, b, c, aux, area;
printf("Digite o lado \"a\": ");
scanf("%f", &a);
printf("Digite o lado \"b\": ");
scanf("%f", &b);
printf("Digite o lado \"c\": ");
scanf("%f", &c);
aux = (a + b + c) / 2;
area = sqrt(aux *(aux - a) * (aux - b) * (aux - c) );
aux = (a + b + c);
printf("O seu triangulo possui area equiavalente a: %.2f\nE possui perimetro equivalente a: %.2f", area, aux);
system("pause>>null");
return 0;
}
