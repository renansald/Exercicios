/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 26, exercicio 10
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int somaintervalo(int n1, int n2);

int main(){
setlocale(LC_ALL, "");
int a, b;
printf("Informe o primeiro número: ");
scanf("%d", &a);
printf("Informe o segundo número: ");
scanf("%d", &b);
a = somaintervalo(a,b);
printf("%d",a);
getch ();
return 0;
}

int somaintervalo(int n1, int n2){
int aux = 0;
if (n1 < n2){
    while (n1 <= n2){
    aux = aux + n1;
    n1++;
    }
}
else if (n2 < n1){
    while (n2 <= n1){
    aux = aux + n2;
    n2++;
    }
}
else{
    aux = n1;
}
return aux;
}
