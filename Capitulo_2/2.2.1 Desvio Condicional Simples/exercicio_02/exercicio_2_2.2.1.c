/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 02
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para ordenar numeros de maneira crescente*/

int main()
{
    int a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
    if ((a > b) && (b > c))
    {
        printf("%d, %d, %d", c, b, a);
    }
    else if ((a > c) && (c > b))
    {
        printf("%d, %d, %d", b, c, a);
    }
    else if ((b > a) && (a > c))
    {
        printf("%d, %d, %d", c, a, b);
    }
    else if ((b > c) &&(c > a))
    {
        printf("%d, %d, %d", a, c, b);
    }
    else if ((c > a) && (a > b))
    {
        printf("%d, %d, %d", b, a, c);
    }
    else
    {
        printf("%d, %d, %d", a, b, c);
    }
    system("pause>>null");
    return 0;
}
