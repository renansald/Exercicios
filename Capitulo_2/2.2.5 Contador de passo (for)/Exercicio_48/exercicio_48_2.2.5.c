/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 21, exercico 48
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");
int base, aux, aux1;
printf("Informe o tamanho da base: ");
scanf ("%d", &base);
for (aux = base; aux >= 0; aux--){
for (aux1 = base; aux1 >= 0; aux1--){
if (aux1 > (base - aux)){
    printf("*");
}
else {
printf(" ");

}
}
printf("\n");
}
return 0;
}
