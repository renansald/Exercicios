/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 25, exercicio 07
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

char conceito (double x){
char n;
if ((x >= 0) && (x <= 49)){
    n = 'D';
    return n;
}
else if((x >= 50) && (x <= 69)){
    n = 'C';
    return n;
}
else if((x >= 70) && (x <= 89)){
    n = 'B';
    return n;
}
else if((x >= 90) && (x <= 100)){
    n = 'A';
    return n;
}
}


int main(){
setlocale(LC_ALL, "portuguese");
char con;
int n, aux;
double media, soma;
media = soma = 0;
printf("Informe o n�mero de notas: ");
scanf("%d", &n);
for(aux = 1; aux <= n; aux++){
    printf("Infomre a %d� nota: ", aux);
    scanf ("%lf", &media);
    soma = soma + media;
}
media = soma / n;
con = conceito(media);
printf ("O conceito do aluno �: %c", con);
getch();
return 0;
}
