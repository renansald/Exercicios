/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 10, exercico 12
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para fazer a converção de celsius para fahrenheit*/
int main ()
{
    float temperatura;
    printf("Digite a temperatura em Celsius:");
    scanf("%f", &temperatura);
    temperatura = (temperatura * 1.8) + 32;
    printf("O valor digitado em Celsius corresponde a %.3f em Fahrenheit", temperatura);
    system("pause>>null");
    return 0;
}
