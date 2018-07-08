/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 22, exercico 51
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");
int d1, d2, d3, d4;

for (d1 = 1; d1 <= 6; d1++){
for (d2 = 1; d2 <= 6; d2++){
for (d3 = 1; d3 <= 6; d3++){
for (d4 = 1; d4 <= 6; d4++){
printf("%d, %d, %d, %d\n", d1, d2, d3, d4);
}
}
}
}
return 0;
}
