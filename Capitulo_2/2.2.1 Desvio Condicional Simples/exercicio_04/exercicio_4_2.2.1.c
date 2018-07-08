/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 04
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para dizer se o numero é par ou impar*/
int main(){
int a;
printf("Digite o numero: ");
scanf("%d", &a);
if (a==0){
    printf("O numero digitado e neutro");
}
else if((a%2)==0){
printf("O numero digitado e par");
}
else{
    printf("O numero e impar");
}
system("pause>>null");
return 0;
}
