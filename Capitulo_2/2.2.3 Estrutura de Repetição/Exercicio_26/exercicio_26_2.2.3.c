/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 18, exercico 26
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* app para calcular o fatorial de um numero n*/
int main(){
setlocale(LC_ALL, "portuguese");
int aux;
long long fatorial = 1;
printf("Digite o n�mero: ");
scanf("%d", & aux);
while(aux > 0){
    fatorial = aux * fatorial;
    aux = aux - 1;
}
printf("%llud", fatorial);
system("pause>>null");
return 0;
}
