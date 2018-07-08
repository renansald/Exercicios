/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 26, exercicio 11
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int multiplica_intervalo(int n, int m){
int aux, resultado;
resultado = 1;
if (n < m){
    for (aux = n; aux <=m; aux++){
        if(aux != 0){
            resultado = aux * resultado;
        }
    }
}
else if (m > n){
    for (aux = m; aux <= n; aux++){
        if(aux != 0){
            resultado = aux * resultado;
        }
    }
}
else{
    resultado = n;
}
return resultado;
}

int main(){
setlocale(LC_ALL, "portuguese");
int n, m;
printf("Infotme o primeiro número: ");
scanf ("%d", &n);
printf("Infotme o segundo número: ");
scanf ("%d", &m);
n = multiplica_intervalo(n,m);
printf("%d", n);
return 0;
}
