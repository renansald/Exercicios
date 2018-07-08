/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 30, exercicio 12
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  setlocale (LC_ALL, "");
  int aux;
  char s[10];
printf ("Informe a sua linda frase éeeé:\n");
  gets (s);
  for (aux = 0; aux < 10; aux++){
  putchar (toupper (s[aux]));
}
  return 0;
}
