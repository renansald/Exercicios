/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 43, exercicio 11
*/

/* Bibilotecas*/
#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int n){
int x = 0;
if (n == 1)
return v[n-1];
else{
    x = v[n-1] + (soma (v, (n-1)));
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
m = soma(v, n);
printf ("A soma e %d", m);
return 0;
}
