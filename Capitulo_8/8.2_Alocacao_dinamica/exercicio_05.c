/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 42, exercicio 05
*/

/* Bibilotecas*/
#include <stdio.h>
#include <stdlib.h>

void leitura(int **v, int n){
for (int a = 0; a < n; a++){
    for (int b = 0; b < n; b++){
    printf ("[%d][%d]: ", a+1, b+1);
    scanf ("%d", &v[a][b]);
    }
}
}

void produto(int **v, int **v2, int **v3, int n){
int aux = 0;
for(int a = 0; a < n; a++){
    for (int c = 0; c < n; c++){
            v3[a][c] = 0;
    for (int b = 0; b < n; b++){
        v3[a][c] = v3[a][c] + (v[a][b] * v2[b][c]);
        //aux = aux + (v[a][b] * v2[b][c]);
        }
        //v3[a][c] = aux;
        //aux = 0;
        }
}
}

void imprimi(int **v, int n){
printf("\n");
for (int a = 0; a<n; a++){
    for(int b = 0; b<n; b++){
        printf ("%d\t", v[a][b]);
    }
printf ("\n");
}
}

int main (){
int **a = NULL, **b = NULL, **c = NULL, y;
printf ("Informe o tamanho das matrizes: ");
scanf ("%d", &y);
a = (int**) malloc(y * (sizeof(int*)));
b = (int**) malloc(y * (sizeof(int*)));
c = (int**) calloc(y, (sizeof(int*)));
for (int v = 0; v < y; v++){
    a[v] = (int*) malloc(y * (sizeof(int)));
    b[v] = (int*) malloc(y * (sizeof(int)));
    c[v] = (int*) calloc(y, (sizeof(int)));
}
leitura(a, y);
leitura(b, y);
imprimi(a, y);
imprimi(b, y);
imprimi(c, y);
produto (a, b, c, y);
imprimi(c, y);
for (int i = 0; a < y; a++){
free(a[i]);
free(b[i]);
free(c[i]);
}
free(a);
free(b);
free(c);
return 0;
}
