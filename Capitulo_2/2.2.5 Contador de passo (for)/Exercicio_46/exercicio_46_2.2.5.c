/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 21, exercico 46
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");
int x, aux, n;
printf("Informe o número máximo a ser somado: ");
scanf("%d", &n);
x = 1;
for (aux = 1; aux <= n; aux++){
    x = x + aux;
}
printf ("%d", x);
return 0;
}
