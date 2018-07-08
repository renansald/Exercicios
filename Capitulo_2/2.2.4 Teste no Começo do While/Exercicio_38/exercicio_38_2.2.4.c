/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 20, exercico 38
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* Programa ler uma quantidade não determinada de números positivos.
Calcula a quantidade de números pares e ímpares;
A média de valores pares e a média geral dos números lidos*/
int main(){
    setlocale(LC_ALL, "");

/*declaração de variáveis e atribuição de valores*/
int par, impar, geral, aux, aux1, aux2, resto;
float media, media_geral;
par = impar = aux = aux2 = media = media_geral = 0;
aux1 = 1; // variavel para auxiliar a saber a quantidade de numeros ja digitadas

//Lógica do problema
while (geral != 0){
    printf("Digite o %dº número: ", aux1);
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
printf("A quantidade de números pares é: %d\nA quantidade de números ímpares é: %d\nA média dos números pares é: %.2f\nE a média de todos os números é: %.2f.", par, impar, media, media_geral);
system("pause>>null");
return 0;
}
