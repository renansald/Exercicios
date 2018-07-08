/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 25, exercicio 04
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int Dado();

int main (){
srand(time(NULL));
setlocale (LC_ALL, "portuguese");
int n, n1, n2, n3, n4, n5, n6, x;
float n11, n12, n13, n14, n15, n16;
n1 = n2 = n3 = n4 = n5 = n6 = n11 = n12 = n13 = n14 = n15 = n16 = 0;
for(x = 1000000; x > 0; x--){
n = Dado();
printf("O número é: %d\n", n);
switch (n){
case 1:
    n1 = n1 + 1;
    break;
case 2:
    n2 = n2 + 1;
    break;
case 3:
    n3 = n3 + 1;
    break;
case 4:
    n4 = n4 + 1;
    break;
case 5:
    n5 = n5 + 1;
    break;
case 6:
    n6 = n6 + 1;
    break;
}
}
n11 = (n1 * 100.0) / 1000000;
n12 = (n2 * 100.0) / 1000000;
n13 = (n3 * 100.0) / 1000000;
n14 = (n4 * 100.0) / 1000000;
n15 = (n5 * 100.0) / 1000000;
n16 = (n6 * 100.0) / 1000000;
printf("O número 1 apareceu %d; Correspondendo a %.2f%\nO número 2 apareceu %d; Correspondendo a %.2f%\nO número 3 apareceu %d; Correspondendo a %.2f%\nO número 4 apareceu %d; Correspondendo a %.2f%\nO número 5 apareceu %d; Correspondendo a %.2f%\nO número 6 apareceu %d; Correspondendo a %.2f%\n", n1, n11, n2, n12, n3, n13, n4, n14, n5, n15, n6, n16);
getch();
return 0;
}

int Dado(){
int n;
n = rand()% 6 + 1;
return n;
}
