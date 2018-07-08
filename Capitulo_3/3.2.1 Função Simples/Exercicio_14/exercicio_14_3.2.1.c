/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 26, exercicio 13
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int potencia(int base, int expoente){
int aux, resultado;
resultado = 1;
if (expoente == 0){
    return 1;
}
else {for (aux = 0; aux < expoente; aux ++){
    resultado = resultado * base;
}
return resultado;
}
}

int main () {
int aux, aux1, resposta;
for (aux = 2; aux <= 8; aux += 2){
    for (aux1 = 0; aux1 <=10; aux1++){
        resposta = potencia(aux, aux1);
        printf ("%d^%d = %d\n", aux, aux1, resposta);
    }
printf("\n\n");
}
getch();
return 0;
}
