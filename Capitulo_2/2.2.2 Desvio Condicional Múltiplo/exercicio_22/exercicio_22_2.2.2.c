/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 22
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para indicar o conceito de acordo com a nota do aluno*/
int main (){
int nota;
printf("Digite a nota obtida pelo aluno: ");
scanf("%d", &nota);

switch(nota){

case 10:
    printf("A"); break;

case 9:
    printf("A"); break;

case 8:
    printf("B"); break;

case 7:
    printf("B"); break;

case 6:
    printf("C"); break;

case 5:
    printf("C"); break;

case 4:
    printf("D"); break;

case 3:
    printf("D"); break;

case 2:
    printf("D"); break;

case 1:
    printf("D"); break;

case 0:
    printf("D"); break;

default:
    printf("%d esta fora do intervalo de 0 a 10", nota);
}
/*if ((nota == 10) || (nota == 9)){
    printf("A");
}
else if((nota == 8) || (nota == 7)){
    printf("B");
}
else if((nota == 6) || (nota == 5)){
    printf("C");
}
else if((nota < 5) && (nota >= 0)){
    printf("D");
}
else{
    printf("%d não esta no intervalo de 0 a 10", nota);
}*/
system("pause>>null");
return 0;
}
