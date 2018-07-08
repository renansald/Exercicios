/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 36, exercicio 9
*/

#include <stdio.h>

int main(){
int vetor[10], vetor2[10], vetor3[20], aux = 0;
for (int a = 0; a < 10; a++){
    printf ("Informe o %dº numero do conjunto 1: ", a+1);
    scanf ("%d", &vetor[a]);
    }
for (int a = 0; a < 10; a++){
    printf ("Informe o %dº numero do conjunto 2: ", a+1);
    scanf ("%d", &vetor2[a]);
}
for (int a = 0; a < 20; a++){
    if(a < 10){
        vetor3[a] = vetor[a];
    }
    else{
        vetor3[a] = vetor2[aux];
    aux++;
    }
}
for (int a = 0; a < 20; a++){
    printf ("%d\n", vetor3[a]);
}
printf("\n\n");
for (int a = 0; a < 20; a++){
    for (int b = 0; b < 19; b++){
        if(vetor3[b] > vetor3[b + 1]){
            aux = vetor3[b];
            vetor3[b] = vetor3[b + 1];
            vetor3[b + 1] = aux;
        }
}
}
for (int a = 0; a < 20; a++){
    printf ("%d\n", vetor3[a]);
}
return 0;
}
