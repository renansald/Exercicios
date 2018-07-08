/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 11
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para fazer triangulos com 3 medidas*/
int main (){
float a, b, c, p1, p2, p3, aux;
printf("Digite o valor do primeiro lado: ");
scanf("%f", &a);
printf("Digite o valor do segundo lado: ");
scanf("%f", &b);
printf("Digite o valor do terceiro lado: ");
scanf("%f", &c);

aux = (a + b + c) / 2;
p1 = aux * (aux - a) * (aux - b) * (aux - c);


if ((p1 > 0) && ((a == b) || (b == c) ||(c == a)) && ((b != c) || (c != a) || (a != b))) {
    printf("E possivel formar um triangulo isoceles");
}
else if ((p1 > 0) && (a == b) && (b == c)){
    printf("E possivel formar um triangulo equilatero");
}
else if ((p1 > 0) && (a != b) && (a != c) && (b != c)){
    printf("E possivel formar um triangulo escaleno");
}
else {
    printf("Nao e possivel formar um triangulo");
}

system("pause>>null");
return 0;
}
