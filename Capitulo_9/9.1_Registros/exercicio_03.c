/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 45, exercicio 03
*/

/* Bibilotecas*/
#include <stdio.h>

struct Data{
int dia, mes, ano;
};


int main(){
struct Data b;
int aux = 0;
do{
    printf ("informe o dia no formato dd: ");
    scanf ("%d", &b.dia);
    printf ("informe o mes no formato mm: ");
    scanf ("%d", &b.mes);
    printf ("informe o ano no formato aaaa: ");
    scanf ("%d", &b.ano);
    if (((b.mes == 1) || (b.mes == 3) || (b.mes == 5) || (b.mes == 7) || (b.mes == 8) || (b.mes == 10) || (b.mes == 12)) && (b.dia > 31)){
        printf ("Data invalida reinsira os dados\n");
    }
    else if (((b.mes == 4) || (b.mes == 6) || (b.mes == 9) || (b.mes == 11)) && (b.dia > 30)){
        printf ("Data invalida reinsira os dados\n");
    }
    else if ((b.mes == 2) && (b.dia > 29)){
        printf ("Data invalida reinsira os dados\n");
    }
    else
        aux++;
}while(aux == 0);
printf ("\n%d/%d/%d", b.dia, b.mes, b.ano);
return 0;
}
