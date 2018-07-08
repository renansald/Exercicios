/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 45, exercicio 06
*/

/* Bibilotecas*/
#include <stdio.h>
#include <math.h>

struct ponto{
  double x, y;
};

int main(int argc, char const *argv[]) {
  struct ponto v;
  double dist = 0.0;
  printf ("Informe a coordenada do x do ponto: ");
  scanf("%lf", &v.x);
  printf ("Informe a coordenada do y do ponto: ");
  scanf("%lf", &v.y);
  dist = sqrt((pow(v.x, 2.0)) + (pow(v.y, 2.0)));
  printf ("A distancia do ponto (%lf, %lf) ao ponto (0, 0) e: %.2lf", v.x, v.y, dist);
  return 0;
}
