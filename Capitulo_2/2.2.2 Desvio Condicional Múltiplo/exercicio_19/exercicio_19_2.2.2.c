/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 17, exercico 19
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* app para ler um caracter de opera��o matematica (+, -, /, *)
e dois numeros e ent�o faz a opera��o pedida*/
int main(){
setlocale(LC_ALL, "portuguese");
float num1, num2, resultado;
char operacao;
printf("Informe o primeiro n�mero: ");
scanf("%f", &num1);
printf("Informe a opera��o a ser feita: ");
scanf(" %c", &operacao);
printf("Informe o segundo n�mero: ");
scanf("%f", &num2);

switch (operacao){

case '+':
resultado = num1 + num2;
printf("%f %c %f = %f", num1, operacao, num2, resultado); break;

case '-':
    resultado = num1 - num2;
printf("%f %c %f = %f", num1, operacao, num2, resultado); break;

case '/':
    resultado = num1 / num2;
printf("%f %c %f = %f", num1, operacao, num2, resultado); break;

case '*':
    resultado = num1 * num2;
printf("%f %c %f = %f", num1, operacao, num2, resultado); break;

default:
    printf(" A opera��o %c n�o existe", operacao); break;
}
system("pause>>null");
return 0;
}
