/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 22, exercico 53
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");
int a, b, n;
printf ("Insira o seu valor: ");
scanf ("%d", &a);
for(n = 1; n <= a; n++){
for(b = 1; b <= n; b++){
    printf ("%d", b);
}
printf("\n");
}
return 0;
}
