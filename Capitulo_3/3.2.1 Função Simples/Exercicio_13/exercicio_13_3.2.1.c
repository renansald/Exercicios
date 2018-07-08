/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 26, exercicio 13
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

double polegadas (double n){
n = n/ 2.54;
return n;
}

int main (){
setlocale(LC_ALL, "portuguese");
double cm, r;
printf ("Informe a medida em cm: ");
scanf ("%lf", &cm);
r = polegadas(cm);
printf ("%.2lf cm corresponde a %.2lf\"", cm, r);
getch();
return 0;
}
