/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 07
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para classificar o numero em positivo, negativo e neutro*/
int main (){
float a;
printf("Digite o numero: ");
scanf("%f", &a);
if (a < 0){
    printf("O numero digitado e negativo");
}
else if (a > 0){
    printf("O numero digitado e posito");
}
else{
    printf("o numero digitado e neutro");
}
system("pause>>null");
return 0;
}
