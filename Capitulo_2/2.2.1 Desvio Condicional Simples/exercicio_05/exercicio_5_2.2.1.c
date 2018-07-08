/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 05
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para imprimir o maior numero*/
int main (){
float a, b, c;
printf("Digite o primeiro numero: ");
scanf("%f", &a);
printf("Digite o segundo numero: ");
scanf("%f", &b);
printf("Digite o terceiro numero: ");
scanf("%f", &c);
if((a > b) && (a > c)){
    printf("%f", a);
}else if ((b > a) && (b > c)){
printf("%f", b);
} else {
printf("%f", c);
}
system("pause>>null");
return 0;
}
