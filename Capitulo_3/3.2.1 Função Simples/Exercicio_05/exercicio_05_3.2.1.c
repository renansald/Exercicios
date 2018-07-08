/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 25, exercicio 05
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <float.h>

double fatorial(double n);

int main(){
setlocale(LC_ALL, "portuguese");
double f, r;
printf("Informe o número desejado: ");
scanf ("%lf", &f);
r = fatorial(f);
if( r > 0){
printf ("O fatorial de %.0lf é %.0lf", f, r);
}
else{
    printf("ERRO");
}
getch();
return 0;
}

double fatorial(double n){
int aux;
double r, ctr;
ctr = DBL_MAX;
r = 1;
if (n == 0){
    return 1;
}
else{
for (aux = n; aux > 0; aux --){
    r = r * aux;
if (r > ctr){
    return 0;
}
}
}
return r;

}
