/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 39, exercicio 01
*/

/* Bibilotecas*/
#include <stdio.h>

unsigned long long int fatorial (unsigned long long int fat){
if ((fat == 1) || (fat == 0)){
    return fat;
}
else{
    return fat * fatorial (fat - 1);
}
}

int main (){
unsigned long long int fat;
printf("Informe o valor: ");
scanf ("%llu", &fat);
fat = fatorial(fat);
printf ("%lld", fat);
return 0;
}
