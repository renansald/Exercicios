/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 21, exercico 49
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");
int base, aux, aux1, aux2;
printf("Informe o tamanho da base: ");
aux1 = 0;
do{
scanf ("%d", &base);
if ((base%2) == 0){
    printf ("O triângulo deve ter uma base ímpar, por favor reinsira sua base: ");
}
else {
    aux1 = 1;
}

} while (aux1 < 1);
aux2 = (base / 2);

    for(aux = aux2; aux >= 0; aux--){
    for (aux1 = base; aux1 >= 0; aux1--){
    if ((aux1 <= (base - aux)) && (aux1 > aux)){
    printf("*");
    }
    else{
        printf(" ");
    }
    }
    printf("\n");
}
return 0;
}

