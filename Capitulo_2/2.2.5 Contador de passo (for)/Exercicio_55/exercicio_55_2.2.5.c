/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 22, exercicio 55
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale (LC_ALL, "portuguese");
int aux, termos;
float resultado, aux2;
termos = resultado = 0;
printf("Indique o números de vezes a ser executada a equação: ");
scanf ("%d", &termos);
for (aux = 0; aux < termos; aux++){
    aux2 = ((pow((-1), aux)) / ((2 * aux) + 1));
    resultado = resultado + aux2;
}
resultado = (resultado * 4);
printf("%f", resultado);
return 0;
}
