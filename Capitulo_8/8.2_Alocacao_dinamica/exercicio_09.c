/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 42, exercicio 09
*/

/* Bibilotecas*/
#include <stdio.h>
#include <stdlib.h>

int maior(int v[], int n){
int x;
if (n == 1)
return 0;
else{
    x = maior(v, n-1);
    if (v[n-1] > v[x])
        return (n-1);
    else
        return x;
}
}

void leitura(int v[], int n){
for (int a = 0; a < n; a++){
    printf ("[%d]: ", a+1);
    scanf ("%d", &v[a]);
    }
}

int main(){
int n, *v, m;
printf("Informe o tamanho do vetor: ");
scanf("%d", &n);
v = (int) malloc(n * sizeof(int));
leitura(v, n);
m = maior(v, n);
printf ("O maior valor esta no indice %d e corresponde a %d", m, v[m]);
return 0;
}
