/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 25, exercicio 03
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int Dado();

int main (){
srand(time(NULL));
setlocale (LC_ALL, "portuguese");
int n;
n = Dado();
printf("O número é: %d", n);
getch();
return 0;
}

int Dado(){
int n;
n = rand()% 6 + 1;
return n;
}
