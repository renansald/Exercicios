/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 18, exercico 25
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* app para indicar o maior numero entre 6*/
int main (){
setlocale(LC_ALL, "portuguese");
float x, maior, menor;
int aux = 0;
printf("Digite o número: ");
scanf("%f", &x);
maior = menor = x;
while (aux < 5){
printf("Digite o número: ");
scanf("%f", &x);
if (x > maior){
    maior = x;
}
else if (x < menor){
    menor = x;
}
aux++;
}
printf("o maior número é: %.2f\nE o menor número é: %.2f", maior, menor);
system("pause>>null");
return 0;
}
