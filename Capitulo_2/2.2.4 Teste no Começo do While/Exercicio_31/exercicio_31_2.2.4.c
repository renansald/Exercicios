/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 19, exercico 31
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* insere "n" valores de sal�rio e retonar o maior e o menor*/
int main()
{
    setlocale(LC_ALL, "");
    float salario, maior, menor;

    printf("Digite o sal�rio: ");
    scanf("%f", &salario);

    maior = menor = salario;

    while (salario != (-999))
    {
        printf("Digite o sal�rio: ");
        scanf("%f", &salario);

        if(salario == (-999))
        {
            printf("O maior sal�rio � %.2f\n O menor sal�rio � %.2f", maior, menor);
        }
        else if (salario > maior)
        {
            maior = salario;
        }
        else if (salario < menor)
        {
            menor = salario;
        }
    }
    system("pause>>null");
    return 0;
}
