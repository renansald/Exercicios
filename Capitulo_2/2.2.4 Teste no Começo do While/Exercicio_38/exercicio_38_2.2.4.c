/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 20, exercico 38
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* Programa ler uma quantidade n�o determinada de n�meros positivos.
Calcula a quantidade de n�meros pares e �mpares;
A m�dia de valores pares e a m�dia geral dos n�meros lidos*/
int main(){
    setlocale(LC_ALL, "");

/*declara��o de vari�veis e atribui��o de valores*/
int par, impar, geral, aux, aux1, aux2, resto;
float media, media_geral;
par = impar = aux = aux2 = media = media_geral = 0;
aux1 = 1; // variavel para auxiliar a saber a quantidade de numeros ja digitadas

//L�gica do problema
while (geral != 0){
    printf("Digite o %d� n�mero: ", aux1);
    scanf("%d", &geral);
    resto = (geral % 2);
    if((resto == 0) && (geral >0)){
    par = par +1;
    media = media + geral;
    aux2++;
    aux++;
    media_geral = media_geral + geral;
    }
    else if ((resto != 0) && (geral > 0)){
    impar = impar +1;
    aux++;
    media_geral = media_geral + geral;
    }
aux1++;
}
media_geral = (media_geral / aux);
media = (media / aux2);
printf("A quantidade de n�meros pares �: %d\nA quantidade de n�meros �mpares �: %d\nA m�dia dos n�meros pares �: %.2f\nE a m�dia de todos os n�meros �: %.2f.", par, impar, media, media_geral);
system("pause>>null");
return 0;
}
