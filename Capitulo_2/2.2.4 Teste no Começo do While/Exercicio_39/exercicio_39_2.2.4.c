/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 20, exercico 39
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* realizar somas enquanto o usu�rio desejar e no fim, exibir o resultado total*/
int main(){
    setlocale(LC_ALL, "");

/*declara��o de vari�veis e atribui��o de valores*/
float x, y, resultado;
x = y = resultado = 0;
char on_off = 's';
while(on_off == 's'){
    printf("Digite um valor:");
    scanf("%f", &y);
    printf("Digite outro valor:");
    scanf("%f", &x);
    resultado = x + y + resultado;
    printf("Deseja continuar a somar? (Digite s para sim e n para n�o)");
    scanf(" %c", &on_off);
}
printf("%f", resultado);
system("pause>>null");
return 0;
}
