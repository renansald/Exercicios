/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 03
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para dizer se o numero de entrada é maior que vinte*/
int main (){
float a;
printf("Digite o numero: ");
scanf("%f", &a);
if (a > 20){
    printf("O numero %.2f e maior que 20", a);
}
else {
    printf("O numero %.2f e menor ou igual a 20", a);
}
system("pause>>null");
return 0;
}
