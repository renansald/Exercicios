/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 45, exercicio 04
*/

/* Bibilotecas*/
#include <stdio.h>
#include <math.h>

struct ponto{
  double x, y;
};

struct retangulo{
  struct ponto a, b;
};


int main(int argc, char const *argv[]) {
  struct retangulo z;
  double area, perimetro, diagonal;
  printf ("Informe a cordenada do x do ponto superio: ");
  scanf("%lf", &z.a.x);
  printf ("Informe a cordenada do y do ponto superior: ");
  scanf("%lf", &z.a.y);
  printf ("Informe a cordenada do x do ponto inferior: ");
  scanf("%lf", &z.b.x);
  printf ("Informe a cordenada do y do ponto inferiro: ");
  scanf("%lf", &z.b.y);
  if ((z.a.x > z.b.x) && (z.a.y > z.b.y)){
    area = ((z.a.x) - (z.b.x)) * ((z.a.y) - (z.b.y));
    perimetro = (((z.a.x) - (z.b.x)) * 2.0) + (((z.a.y) - (z.b.y)) * 2.0);
    diagonal = sqrt(pow(((z.a.x) - (z.b.x)), 2.0) + pow(((z.a.y) - (z.b.y)), 2.0));
    printf("Area = %lf\nPerimetro = %lf\n diagonal = %lf", area, perimetro, diagonal);
  }
  else if((z.a.x > z.b.x) && (z.a.y < z.b.y)){
    area = ((z.a.x) - (z.b.x)) * ((z.b.y) - (z.a.y));
    perimetro = (((z.a.x) - (z.b.x)) * 2.0) + (((z.b.y) - (z.a.y)) * 2.0);
    diagonal = sqrt(pow(((z.a.x) - (z.b.x)), 2.0) + pow(((z.b.y) - (z.a.y)), 2.0));
    printf("Area = %lf\nPerimetro = %lf\n diagonal = %lf", area, perimetro, diagonal);
  }
  else if((z.a.x < z.b.x) && (z.a.y < z.b.y)){
    area = ((z.b.x) - (z.a.x)) * ((z.b.y) - (z.a.y));
    perimetro = (((z.b.x) - (z.a.x)) * 2.0) + (((z.b.y) - (z.a.y)) * 2.0);
    diagonal = sqrt(pow(((z.b.x) - (z.a.x)), 2.0) + pow(((z.b.y) - (z.a.y)), 2.0));
    printf("Area = %lf\nPerimetro = %lf\n diagonal = %lf", area, perimetro, diagonal);
  }
  else if((z.a.x < z.b.x) && (z.a.y > z.b.y)){
    area = ((z.b.x) - (z.a.x)) * ((z.a.y) - (z.b.y));
    perimetro = (((z.b.x) - (z.a.x)) * 2.0) + (((z.a.y) - (z.b.y)) * 2.0);
    diagonal = sqrt(pow(((z.b.x) - (z.a.x)), 2.0) + pow(((z.a.y) - (z.b.y)), 2.0));
    printf("Area = %lf\nPerimetro = %lf\n diagonal = %lf", area, perimetro, diagonal);
  }
  else{
    printf ("Nao existe retangulo");
  }
  return 0;
}
