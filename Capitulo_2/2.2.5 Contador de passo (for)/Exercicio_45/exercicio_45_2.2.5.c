/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 21, exercico 45
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");
int n, aux, maior;
for (aux = 1; aux <= 10; aux ++){
    printf ("Digite o %d� valor: ", aux);
    scanf ("%d", &n);
    if (aux == 1){
        maior = n;
    }
    else if (n > maior){
    maior = n;
    }
}
    printf("o maior n�mero inserido � %d", maior);
return 0;
}
