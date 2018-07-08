/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 21, exercico 44
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
int n, aux;
n  = 0;

for (aux = 1; aux <= 20; aux++){
    n++;
    if ((n == 1) || (n == 2) || (n == 3) || (n == 7) || (n == 5)){
        printf ("%d\n", n);
    }
    else if (((n%2) != 0) && ((n%3) != 0) && ((n%5) != 0) && ((n%7) != 0)){
        printf ("%d\n", n);
    }
    else{
        aux--;
    }

}
return 0;
}
