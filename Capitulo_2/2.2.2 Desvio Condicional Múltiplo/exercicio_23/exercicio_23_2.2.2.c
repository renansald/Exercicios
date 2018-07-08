/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 23
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para coverter c em f e f em c*/
int main(){
float temperatura, resultado;
char grandeza;
printf("Informe a temperatura: ");
scanf("%f", &temperatura);
printf("Informe a unidade da temperatura: ");
scanf("%s", &grandeza);

switch(grandeza){

case ('C'):
    resultado = ( (9 * temperatura) + 32) / 5;
    printf("A temperatura %f °C corresponde a %.2f °F", temperatura, resultado); break;

case ('c'):
    resultado = ( (9 * temperatura) + 32) / 5;
    printf("A temperatura %f °C corresponde a %.2f °F", temperatura, resultado); break;

case ('F'):
    resultado = ((5 / 9) * (temperatura - 32));
    printf("A temperatura %f °F corresponde a %.2f °C", temperatura, resultado); break;

case ('f'):
    resultado = ((5 / 9) * (temperatura - 32));
    printf("A temperatura %f °F corresponde a %.2f °C", temperatura, resultado); break;

default:
    printf("Unidade não existe");

}

system("pause>>null");
return 0;
}
