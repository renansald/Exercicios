/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 42, exercicio 04
*/

/* Bibilotecas*/
#include <stdio.h>
#include <stdlib.h>

void preenche(int v[], int y){
for (int a = 0; a < y; a++){
    printf ("Informe o %d numero: ", a+1);
    scanf("%d", &v[a]);
}
}

void eh_multiplo(int a, int b, int *resp){
if (a%b == 0){
    *resp = 1;}
else{
    *resp = 0;}
}

int main (){
int y, x, *vet = NULL, s;
printf ("Informe a quantidade de numeros: ");
scanf ("%d", &y);
printf ("Informe o numero para verificacao de multiplo: ");
scanf ("%d", &x);
vet = (int*) malloc(y * (sizeof(int)));
preenche (vet, y);
for (int a = 0; a < y; a++){
    eh_multiplo(vet[a], x, &s);
    if (s == 1){
        printf ("%d e multiplo de %d\n", vet[a], x);
    }
    else{
        printf("%d nao e multiplo de %d\n", vet[a], x);
    }
}
free(vet);
return 0;
}
