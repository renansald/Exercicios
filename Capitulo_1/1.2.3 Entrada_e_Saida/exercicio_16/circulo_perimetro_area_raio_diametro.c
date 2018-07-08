/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 10, exercico 16
*/

/* Bibilotecas*/
#include <stdio.h>
#include <math.h>

/* app para calcular a area e perimetro de um circulo*/
int main(){
float raio, perimetro, diametro;
printf("Digite o raio do circulo:");
scanf("%f",&raio);
perimetro = 2 * 3.14 * raio;
diametro = 2 * raio;
raio = 3.14 * (pow(raio,2));
printf("O seu perimetro e: %.2f\nSeu diametro e: %.2f\nE sua area e: %.2f", perimetro, diametro, raio);
system("pause>>null");
return 0;
}
