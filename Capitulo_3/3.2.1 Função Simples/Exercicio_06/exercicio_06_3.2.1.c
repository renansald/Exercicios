/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 25, exercicio 06
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

void menor(int a, int b, int c){
if ((a < b) && (a < c)){
    return printf("O seu menor número é: %d", a);
}
else if ((b < a) && (b < c)){
    return printf("O seu menor número é: %d", b);
}
else if ((c < a) && (c < b)){
    return printf("O seu menor número é: %d", c);
}
else {
    return printf("Os números informados são iguais");
}
}

int main(){
setlocale(LC_ALL, "portuguese");
int a, b, c;
printf("Infomre o primeiro número: ");
scanf ("%d", &a);
printf("Infomre o segundo número: ");
scanf ("%d", &b);
printf("Infomre o terceiro número: ");
scanf ("%d", &c);
menor(a, b, c);
getch();
return 0;

}
