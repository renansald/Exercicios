/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 19, exercico 36
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* imprime todos os divisores de 3 que existem entre os n�meros 1 e 3000000. */
int main()
{
setlocale(LC_ALL, "");

/*declara��o de vari�veis e atribui��o de valores*/
int resto, aux;
aux = 1;
/*L�gica do problema*/
while(aux <= 3000000){
    resto = aux & 3;
    if (resto == 0){
        printf("%d\n", aux);
    }
aux++;
}
system("pause>>null");
return 0;
}
