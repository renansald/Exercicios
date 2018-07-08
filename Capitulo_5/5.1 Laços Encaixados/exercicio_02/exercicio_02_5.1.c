/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 33, exercicio 02
*/

#include <stdio.h>
#include <locale.h>

void tabuada(){
int aux, aux1;
for (aux = 1; aux <= 10; aux++){
    printf ("Tabuada de %d\n", aux);
    for (aux1 = 0; aux1 <= 10; aux1++){
        printf ("%d * %d = %d\n", aux, aux1, aux*aux1);
    }
printf ("\n");
}
}

int main (){
tabuada();
return 0;
}
