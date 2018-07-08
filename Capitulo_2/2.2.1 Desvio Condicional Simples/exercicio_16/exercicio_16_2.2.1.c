/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 16
*/

/* Bibilotecas*/
#include <stdio.h>

/* Indica se um numero é par ou impar*/
int main(){
int numero, fator;
printf("Digite o numero: ");
scanf("%d", &fator);
if (fator != 0){
    numero = fator%2;
}
if (fator == 0){
    printf("numero neutro");
}
else if (numero == 0){
    printf("numero par");
}
else{
    printf("numero impar");
}
system ("pause>>null");
return 0;
}
