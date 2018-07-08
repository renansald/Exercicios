/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 45, exercicio 01
*/

/* Bibilotecas*/
#include <stdio.h>
#include <stdlib.h>

struct dados{
char nome[51], endereco[101];
int idade;
};

int main(){
struct dados pessoa;
printf ("nome: ");
scanf (" %[^\n]s", &pessoa.nome);
printf("Endereco: ");
scanf (" %[^\n]s", &pessoa.endereco);
printf("Idade: ");
scanf ("%d", &pessoa.idade);
printf ("Nome: %s\nEndereco: %s\nIdade: %d", pessoa.nome, pessoa.endereco, pessoa.idade);
return 0;
}
