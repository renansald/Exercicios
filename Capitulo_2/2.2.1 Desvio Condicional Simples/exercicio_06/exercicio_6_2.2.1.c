/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 06
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para informar se o numero esta dentro do intervalo informado*/
int main(){
float int_menor, int_maior, numero;
printf("Informe o menor numero do intervalo: ");
scanf("%f", &int_menor);
printf("Informe o maior numero do intervalo: ");
scanf("%f", &int_maior);
if(int_maior < int_menor){
        printf("intervalo errado, o numero menor do intervalo e maior que o numero maior informado pelo usuario");
}else{
printf("Informe o numero que deseja ver se esta no intervalo: ");
scanf("%f", &numero);}
if((numero < int_menor)||(numero > int_maior)){
    printf("O numero nao esta no intervalo");
} else {
printf("O numero esta dentro do intervalo");
}
system("pause>>null");
return 0;
}
