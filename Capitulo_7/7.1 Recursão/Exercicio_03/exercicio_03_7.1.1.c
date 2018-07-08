/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 39, exercicio 01
*/

/* Bibilotecas*/
#include <stdio.h>

void strctr(char str[], int n){
if (n == 0)
    printf ("%c", str[n]);
else
    strctr(str, n+1);
}

int main (){
char str[101];
int tam = 0;
printf ("Informe sua frase: ");
scanf ("%[^\n]s", str);
while (str[tam] != '\0'){
    tam++;
}
strctr(str, tam - 1);
return 0;
}
