/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 42, exercicio 08
*/

/* Bibilotecas*/
#include <stdio.h>
#include <stdlib.h>

void leitura(int v[], int n){
for (int a = 0; a < n; a++){
    printf ("[%d]: ", a+1);
    scanf ("%d", &v[a]);
    }
}

void imprimi(int v[], int n){
if (n == 1)
    printf ("%d\n", v[n-1]);
else{
    imprimi(v, n-1);
    printf ("%d\n", v[n-1]);
}
}

int main (){
int n, *v = NULL;
printf("Informe a quantidade de elementos do vetor: ");
scanf ("%d", &n);
v = (int) malloc(n * sizeof(int));
leitura(v, n);
imprimi(v, n);
return 0;
}
