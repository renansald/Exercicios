/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 26, exercicio 12
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int fibonacci (int n){
int atual, anterior, proximo, aux;
anterior = 0;
atual = 1;
if (n == 0){
    return 0;
}
else{
for (aux = 0; aux < 1000; aux++){
    proximo = atual + anterior;
    anterior = atual;
    atual = proximo;
    if (atual >= n){
        return atual;
    }
}
}
}

int main (){
setlocale (LC_ALL, "portuguese");
int n, b;
printf ("Informe o n�mero: ");
scanf ("%d", &n);
b = fibonacci(n);
printf ("%d � maior ou igul a %d na sequ�ncia de Fibonacci", b, n);
getch ();
return 0;
}
