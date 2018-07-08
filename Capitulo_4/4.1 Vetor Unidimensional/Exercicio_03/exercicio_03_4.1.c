/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 03
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main (){
setlocale(LC_ALL, "portuguese");
srand(time (NULL));
int i, v[10];
for (i = 0; i < 10; i++){
    v[i] = (rand() % 11 + 10);
}
for (i = 0; i < 10; i++){
    printf ("%d\n", v[i]);
}
return 0;
}
