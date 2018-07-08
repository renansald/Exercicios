/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 42, exercicio 07
*/

/* Bibilotecas*/
#include <stdio.h>
#include <stdlib.h>

void leitura(int v[][1000], int n){
for (int a = 0; a < n; a++){
    for (int b = 0; b < n; b++){
    printf ("[%d][%d]: ", a+1, b+1);
    scanf ("%d", &v[a][b]);
    }
}
}

void produto(int m[][1000], int m2[][1000], int n, int mult){
for(int a = 0; a < n; a++){
    for(int b = 0; b < n; b++){
        m2[a][b] = m[a][b] * mult;
    }
}
}

void imprimi(int v[][1000], int n){
printf("\n");
for (int a = 0; a<n; a++){
    for(int b = 0; b<n; b++){
        printf ("%d\t", v[a][b]);
    }
printf ("\n");
}
}

int main(){
int n, **mat = NULL, **mat2 = NULL, mult;
printf ("Informe a ordem da matriz: ");
scanf ("%d", &n);
printf ("Informe o multiplicador: ");
scanf ("%d", &mult);
mat = (int**) malloc(n * (sizeof(int*)));
mat2 = (int**) malloc(n * (sizeof(int*)));
for(int a = 0; a < n; a++){
    mat[a] = (int*) malloc(n * (sizeof(int)));
    mat2[a] = (int*) malloc(n * (sizeof(int)));
}
leitura(mat, n);
imprimi(mat, n);
produto(mat, mat2, n, mult);
imprimi(mat2, n);
return 0;
}
