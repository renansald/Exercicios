/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 37, exercicio 17
*/

#include <stdio.h>

void strinv (char str[]){
    char str2[100];
    int tam = 0;
    while(str[tam] != '\0'){
        str2[tam] = str[tam];
        tam++;
    }

    for (int a = 0, b = tam - 1; (a <= tam) && (b >= 0); a++, b--){
        str[a] = str2[b];
    }
}

int main(){
char str[100];
printf ("Informe a string: ");
scanf ("%s", str);
strinv(str);
printf("%s", str);
return 0;
}
