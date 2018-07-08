/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 25, exercicio 08
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

void estacao(int dia, int mes){
/*Primavera*/
if ((dia >= 23) && (dia <= 30) && (mes == 9)){
    return printf("%d/%d é primavera", dia, mes);
}
else if ((dia >= 1) && (dia <= 31) && (mes == 10)){
    return printf("%d/%d é primavera", dia, mes);
}
else if ((dia >= 1) && (dia <= 30) && (mes == 11)){
    return printf("%d/%d é primavera", dia, mes);
}
else if ((dia >= 1) && (dia <= 20) && (mes == 12)){
    return printf("%d/%d é primavera", dia, mes);
}

/*Verão*/
if ((dia >= 21) && (dia <= 31) && (mes == 12)){
    return printf("%d/%d é verão", dia, mes);
}
else if ((dia >= 1) && (dia <= 31) && (mes == 1)){
    return printf("%d/%d é verão", dia, mes);
}
else if ((dia >= 1) && (dia <= 29) && (mes == 2)){
    return printf("%d/%d é verão", dia, mes);
}
else if ((dia >= 1) && (dia <= 20) && (mes == 3)){
    return printf("%d/%d é verão", dia, mes);
}

/*Outono*/
if ((dia >= 21) && (dia <= 31) && (mes == 3)){
    return printf("%d/%d é outono", dia, mes);
}
else if ((dia >= 1) && (dia <= 30) && (mes == 4)){
    return printf("%d/%d é outono", dia, mes);
}
else if ((dia >= 1) && (dia <= 31) && (mes == 5)){
    return printf("%d/%d é outono", dia, mes);
}
else if ((dia >= 1) && (dia <= 20) && (mes == 6)){
    return printf("%d/%d é outono", dia, mes);
}

/*Inverno*/
if ((dia >= 21) && (dia <= 30) && (mes == 6)){
    return printf("%d/%d é inverno", dia, mes);
}
else if ((dia >= 1) && (dia <= 31) && (mes == 7)){
    return printf("%d/%d é inverno", dia, mes);
}
else if ((dia >= 1) && (dia <= 31) && (mes == 8)){
    return printf("%d/%d é inverno", dia, mes);
}
else if ((dia >= 1) && (dia <= 22) && (mes == 9)){
    return printf("%d/%d é inverno", dia, mes);
}
}


int main(){
setlocale(LC_ALL, "portuguese");
int mes, dia;
printf ("Informe o dia: ");
scanf ("%d", &dia);
printf ("Informe o mês; ");
scanf ("%d", &mes);
estacao (dia, mes);
getch();
return 0;
}
