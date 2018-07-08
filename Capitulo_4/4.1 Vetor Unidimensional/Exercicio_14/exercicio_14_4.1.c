/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 30, exercicio 14
*/

#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
int aux = 0, aux1 = 0;
char string[51], string2[51];
printf("Informe a frase ou palavara: ");
scanf ("%[^\n]s", string);
while (string[aux1] != '\0'){
    if (string[aux1] != ' '){
        string2[aux] = string[aux1];
        aux++;
    }
    aux1++;
}
aux -= 1;
for (aux1 = 0 ; aux1 < aux; aux1++){
if (string2[aux] != string2[aux1]){
    printf("Não é um palindromo");
    return 0;
}
aux--;
}
printf ("palindromo");
return 0;
}
