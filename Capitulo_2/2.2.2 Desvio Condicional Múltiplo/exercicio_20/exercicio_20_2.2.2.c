/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 20
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para indicar o mes correspondente a um numero de 1 a 12*/
int main(){
int mes;
printf("Digite o numero: ");
scanf("%d", &mes);
switch (mes){

case 1:
    printf("Janeiro"); break;

case 2:
    printf("Fevereiro"); break;

case 3:
    printf("Marco"); break;

case 4:
    printf("Abril"); break;

case 5:
    printf("Maio"); break;

case 6:
    printf("Junho"); break;

case 7:
    printf("Julho"); break;

case 8:
    printf("Agosto"); break;

case 9:
    printf("Setembro"); break;

case 10:
    printf("Outubro"); break;

case 11:
    printf("Novembro"); break;

case 12:
    printf("Dezembro"); break;

default:
    printf("O numero %d esta fora do intevalo de 1 a 12", mes);
}
system("pause>>null");
return 0;
}
