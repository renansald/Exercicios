/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 18, exercico 27
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* app para calcular o fatorial de um numero n*/
int main(){
setlocale(LC_ALL, "portuguese");
int numero, aux, resultado;
aux = 0;
printf("Digite o número: ");
scanf("%d", &numero);
while(aux <= numero){
    resultado = numero * aux;
    printf("%d * %d = %d\n", aux, numero, resultado);
    aux++;
}
printf("FIM!");
system("pause>>null");
return 0;
}
