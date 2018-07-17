/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 41, exercicio 03
*/

/* Bibilotecas*/
#include <stdio.h>
#include <stdlib.h>

void preenche( char **mat, double **v, int g){
for (int a = 0; a < g; a++){
    printf ("Informe o nome do %d aluno: ", a+1);
    scanf (" %[^\n]s", mat[a]);
    for (int b = 0; b < 2; b++){
        printf ("Informe a %d nota: ", b+1);
        scanf ("%lf", &v[a][b]);
    }
}
}

void media (double **v, double m[], int n){
double soma = 0.0;
for (int a = 0; a < n; a++){
    for (int b = 0; b < 2; b++){
        soma = soma + v[a][b];
    }
    m[a] = soma /2.0;
    soma = 0.0;
}
}

void imprimi(char **nome, double **notas, double *medias, int n){
for(int a =0; a < n; a++){
    printf ("Aluno %d\nnome: %s", a+1, nome[a]);
    for(int b = 0; b < 2; b++){
        printf ("\nNota %d: %.2lf", b+1, notas[a][b]);
    }
    printf ("\nMedia: %.2lf\n", medias[a]);
}
}

int main(){
char **nome;
double **notas, *medias;
int n;
printf ("Informe o numero de alunos: ");
scanf ("%d", &n);
nome = (char**) malloc(n * (sizeof(char*)));
notas = (double**) malloc(n * (sizeof(double*)));
medias  = (double*) malloc(n * (sizeof(double)));
for (int a = 0; a < n; a++){
    nome[a] = (char*) malloc (16 * (sizeof(char)));
    notas[a] = (double*) malloc(2 * (sizeof(double)));
}
preenche(nome, notas, n);
media(notas, medias, n);
imprimi(nome, notas, medias, n);
free(nome);
free(notas);
free(medias);
return 0;
}
