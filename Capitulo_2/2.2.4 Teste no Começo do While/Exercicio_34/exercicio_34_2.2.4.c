/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 19, exercico 34
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* programa que some o peso de pessoas que tenham mais de 30 anos.
O usu�rio deve poder digitar o caracter �s� enquanto desejar continuar entrando com pessoas e digitar �n� para sair. */
int main()
{
setlocale(LC_ALL, "");

//declara��o de vari�veis

float peso, aux;
int idade;
char on_off = 's';
aux = 0;

//L�gica do problema

while (on_off != 'n'){
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);

    if (idade >= 30){
        aux = peso + aux;
    }
    printf("Desejar inserir mais pessoas? (Digite s para sim e n para n�o)");
    scanf(" %c", &on_off);
}
printf("A soma dos pesos das pessoas maiores que 30 nos �: %.2f", aux);
system("pause>>null");
return 0;
}
