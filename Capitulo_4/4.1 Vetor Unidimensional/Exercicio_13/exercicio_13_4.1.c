/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 30, exercicio 13
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL, "portuguese");
  int aux, s1, s3;
  s1 = s3 = 0;
  char s[100], s2[100];
  printf ("Informe a palavra: ");
  scanf("%s", s);
  printf ("Informe a segunda palavra: ");
  scanf(" %s", s2);
  for (aux = 0; s[aux] != '\0'; aux++){
    s1 = s1 + s[aux];
  }
  for (aux = 0; s2[aux] != '\0'; aux++){
    s3 = s3 + s2[aux];
  }
  if (s3 == s1){
    printf ("Anagramas");
    }
    else{
    printf  ("não");
    }
  return 0;
}
