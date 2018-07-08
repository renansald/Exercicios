/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 17
*/

/* Bibilotecas*/
#include <stdio.h>
#include <math.h>

/* Calculo riazes de uma equação de segundo grau*/
int main(){
float a, b, c, delta;
printf("Indiqueo valor de a: ");
scanf("%f", &a);
printf("Indiqueo valor de b: ");
scanf("%f", &b);
printf("Indiqueo valor de c: ");
scanf("%f", &c);
delta = (-4) * a *c;
if (delta >= 0){
    c = ((-b) - (sqrt(delta))) / (2 * a);
    b = ((-b) + (sqrt(delta))) / (2 * a);
    printf("Suas raizes sao: %.2f e %.2f", c, b);
}
system("pause>>null");
return 0;
}
