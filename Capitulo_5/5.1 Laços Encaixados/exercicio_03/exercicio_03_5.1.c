/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 33, exercicio 03
*/

#include <stdio.h>
#include <locale.h>

void resulta_em(int numero){
int aux, aux1;
for (aux = -100; aux <= 100; aux ++){
    for (aux1 = aux; aux1 <= 100; aux1++){
        if ((aux1 * aux) == numero){
        printf ("%d * %d = %d\n", aux, aux1, aux*aux1);
    }
    }
}
}

int main (){
int numero;
printf ("Informe o valor desejado: ");
    scanf ("%d", &numero);
    resulta_em(numero);
return 0;
}
