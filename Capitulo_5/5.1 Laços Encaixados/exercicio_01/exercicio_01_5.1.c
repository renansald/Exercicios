/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 33, exercicio 01
*/

#include <stdio.h>
#include <locale.h>

double opercao (double a, double b, char oper){
switch (oper){
case '+':
    return (a+b);
case '-':
    return (a-b);
case '*':
    return (a*b);
case '/':
    return (a/b);
}
}

int main (){
setlocale(LC_ALL, "portuguese");
double a, b, r;
char op;
printf("Informe o seu primeiro valor: ");
scanf ("%lf", &a);
printf ("Informe a operação a ser executada: ");
scanf (" %c", &op);
printf("Informe o seu segundo valor: ");
scanf ("%lf", &b);
r = opercao (a, b, op);
printf ("%lf %c %lf = %lf", a, op, b, r);
return 0;
}
