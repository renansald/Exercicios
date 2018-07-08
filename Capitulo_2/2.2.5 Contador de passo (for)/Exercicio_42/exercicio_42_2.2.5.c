/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 20, exercico 42
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
int corredor, n, aux;
float time, maior;
printf ("Informe o número de corredores: ");
scanf ("%d", &n);
for (aux = 1; aux <= n; aux = aux + 1){
    printf ("Informe o tempo do %dº corredor: ", aux);
    scanf ("%f", &time);
    if (aux == 1){
        maior = time;
        corredor = aux;
    }
    else if (time > maior){
        maior = time;
        corredor = aux;
    }
}
printf ("O maior tempo foi do corredor %d correspondendo a: %.2f", corredor, maior);
return 0;
}
