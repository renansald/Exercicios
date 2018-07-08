/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 19, exercico 32
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* leitura de varios valores inteiro que serão lidos até que o usuário insira um valor negativo*/
int main()
{
setlocale(LC_ALL, "");
int x, aux, aux1;
float resultado;
aux1 = 1;
aux = 0;
x = 0;
resultado = 0;
while (x >= 0){
    printf("Digite o %dº número: ", aux1);
    scanf("%d", &x);
    if (x >= 0) {
    resultado = x + resultado;
    aux++;
    aux1++;
    }
}
    resultado = (resultado / aux);
    printf("A média dos números é equivalênte a: %.2f", resultado);
    system("pause>>null");
    return 0;
    }
