/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 24, exercicio 02
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int soma(int n);

int main(){
setlocale (LC_ALL, "portuguese");
int n, r;
printf("Informe o número: ");
scanf ("%d", &n);
r = soma(n);
printf ("A soma de 1 até %d é %d", n, r);
getch();
return 0;
}

int soma(int n){
int aux, r;
r = 0;
for(aux = n; aux > 0; aux--){
    r = r + aux;
}
return r;
}
