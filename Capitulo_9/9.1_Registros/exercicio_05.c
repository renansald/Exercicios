/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 45, exercicio 05
*/

/* Bibilotecas*/
#include <stdio.h>

struct ponto{
  double x, y;
};

struct retangulo{
  struct ponto a, b;
};


int main(int argc, char const *argv[]) {
  struct retangulo z;
  struct ponto v;
  printf ("Informe a cordenada do x do ponto superio do retangulo: ");
  scanf("%lf", &z.a.x);
  printf ("Informe a cordenada do y do ponto superior do retangulo: ");
  scanf("%lf", &z.a.y);
  printf ("Informe a cordenada do x do ponto inferior do retangulo: ");
  scanf("%lf", &z.b.x);
  printf ("Informe a cordenada do y do ponto inferiro do retangulo: ");
  scanf("%lf", &z.b.y);
  printf ("Informe a cordenada do x do ponto: ");
  scanf("%lf", &v.x);
  printf ("Informe a cordenada do y do ponto: ");
  scanf("%lf", &v.y);
  if ((v.x < z.a.x) && (v.x > z.b.x) && (v.y < z.a.y) && (v.y > z.b.y)){
    printf ("O ponto (%lf, %lf) esta dentro do retangulo", v.x, v.y);
  }
  else if((v.x < z.a.x) && (v.x > z.b.x) && (z.a.y < v.y) && (v.y < z.b.y)){
    printf ("O ponto (%lf, %lf) esta dentro do retangulo", v.x, v.y);
  }
  else if((v.x > z.a.x) && (v.x < z.b.x) && (v.y > z.a.y) && (v.y < z.b.y)){
    printf ("O ponto (%lf, %lf) esta dentro do retangulo", v.x, v.y);
  }
  else if((v.x > z.a.x) && (v.x < z.b.x) && (v.y < z.a.y) && (v.y > z.b.y)){
    printf ("O ponto (%lf, %lf) esta dentro do retangulo", v.x, v.y);
  }
  else
  printf ("O ponto (%lf, %lf) nao esta dentro do retangulo", v.x, v.y);
  return 0;
}
