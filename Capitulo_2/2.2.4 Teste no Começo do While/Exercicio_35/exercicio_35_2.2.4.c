/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 19, exercico 35
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* programa que gere e escreva os 4 primeiros n�meros perfeitos*/
int main()
{
setlocale(LC_ALL, "");

//declara��o de vari�veis
int x, aux, resto, aux1;
aux = 0;
aux1 = 0;

printf("Digite o n�mero: ");
scanf("%d",&x);

while (aux < 4){
    aux1++;
    resto = (x % aux1);
        if (x == aux1){
        aux = 4;
    }
    else if (resto == 0){
        printf("%d\t", aux1);
        aux++;
    }
}
system("pause>>null");
return 0;
}
