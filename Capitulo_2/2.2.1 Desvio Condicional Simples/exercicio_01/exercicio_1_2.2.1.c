/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 01
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para ordenar numeros de maneira decrescente*/

int main (){
float a, b;
printf("Digite o primeiro numero: ");
scanf("%f", &a);
printf("Digite o segundo numero: ");
scanf("%f", &b);
if (a > b){
    printf("Seu resultado e %.2f, %.2f", a, b);
    }
    else{
        printf("Seu resultado e %.2f, %.2f", b, a);
    }
system("pause>>null");
return 0;
}
