/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 36, exercicio 8
*/

#include <stdio.h>

int main(){
int vetor[10], aux;
for (int a = 0; a < 10; a++){
    printf ("Informe o %dº numero: ", a+1);
    scanf ("%d", &vetor[a]);
}
for (int a = 0; a < 10; a++){
    for (int b = 0; b < 9; b++){
        if(vetor[b] > vetor[b + 1]){
            aux = vetor[b];
            vetor[b] = vetor[b + 1];
            vetor[b + 1] = aux;
        }
}
}
for (int a = 0; a < 10; a++){
    printf ("%d\n", vetor[a]);
}
return 0;
}
