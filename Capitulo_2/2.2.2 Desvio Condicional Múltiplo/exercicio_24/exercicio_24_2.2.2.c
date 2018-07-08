/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 19
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para ler um caracter de operação matematica (+, -)
e dois numeros e então faz a operação pedida*/
int main(){
float num1, num2, resultado;
char operacao;
printf("Digite o primeiro numero: ");
scanf("%f", &num1);
printf("Digite o segundo numero: ");
scanf("%f", &num2);
printf("Digite a operaca a ser executada: ");
scanf("%s", &operacao);

switch(operacao){

case '+':
    resultado = num1 + num2;
    printf("%f + %f = %f\n", num1, num2, resultado); break;

case '-':
    resultado = num1 - num2;
    printf("%f - %f = %f\n", num1, num2, resultado); break;

default:
    /*printf("Operacao %s não existe\n", operacao); break;*/
    printf("Operacao não existe\n"); break;

}
printf("Digite um caracter para sair do programa: ");
scanf("%s", &operacao);

system("pause>>null");
return 0;
}
