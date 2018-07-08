/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 21
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para indicar a função a partir de um codigo*/
int main(){
int codigo;
printf("Digite o codigo correspondente ao funcionario: ");
scanf("%d", &codigo);
switch(codigo){

case 101:
    printf("Vendedor"); break;

case 102:
    printf("Atendente"); break;

case 103:
    printf("Auxiliar Tecnico"); break;

case 104:
    printf("Assistente"); break;

case 105:
    printf("Coordenador de Grupo"); break;

case 106:
    printf("Gerente"); break;

default:
    printf("Codigo Invalido");
}

system("pause>>null");
return 0;
}
