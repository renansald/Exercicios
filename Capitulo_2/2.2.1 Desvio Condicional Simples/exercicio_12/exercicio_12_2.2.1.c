/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 12
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para finformar em qual quadrante o ponta se encontra*/
int main(){
float x, y;
printf("digite o valor de \"x\": ");
scanf("%f", &x);
printf("digite o valor de \"y\": ");
scanf("%f", &y);
if ((x >= 0) && (y>0)){
    printf ("O seu ponto se encontra no 1º quadrante");
}else if((x <= 0) && (y > 0)){
printf("Seu ponto se encontra no 2º quadrante");
}else if ((x <= 0) && (y < 0)){
printf("Seu ponto se encontra no 3º quadrante");
}else {
printf("Seu ponto se encontra no 4º quadrante");
}
system("pause>>null");
return 0;
}
