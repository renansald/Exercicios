/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 01
*/

#include <stdio.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");
int i, np, ni, v[20];
np = ni = 0;
for (i = 0; i < 20; i++){
    printf ("Informe o seu %d� n�mero: ", i+1);
    scanf ("%d", &v[i]);
    if ((v[i]%2)==0){
        np = np + 1;
    }
    else {
        ni = ni + 1;
    }
}
printf ("Seus n�meros s�o:\n");
for (i = 0; i < 20; i++){
    printf ("%d\n", v[i]);
}
printf ("E voc� tem %d n�meros pares e %d n�meros �mpares", np, ni);
return 0;
}
