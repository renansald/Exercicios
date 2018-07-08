/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 25, exercicio 09
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
int contaimpar (int x, int y);

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3;
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    n3 = contaimpar(n1, n2);
    if (n1 > n2){
    printf("O número de ímpares de %d a %d é %d", n1, n2, n3);
    }
    else if (n1 < n2){
        printf("O número de ímpares de %d a %d é %d", n2, n1, n3);
    }
    else if ((n1 == n2) && (n3 > 0)){
        printf ("Você não tem um intervalo, apenas um número ímpar");
    }
    else{
        printf ("Você não tem um intervalo, e o numero é par");
    }
        getch();
    return 0;
}

int contaimpar (int x, int y)
{
    int cont = 0;
    if (x > y)
    {
        while (y <= x)
        {
            if ((y%2) != 0)
            {
                cont = cont + 1;
            }
            y += 1;
        }
    }
    else if (x < y)
    {
        while (x <= y)
        {
            if ((x%2) != 0)
            {
                cont = cont + 1;
            }
            x += 1;

        }
    }
    else
    {
        if ((x%2)!= 0)
        {
            cont = 1;
        }
    }
    return cont;
}
