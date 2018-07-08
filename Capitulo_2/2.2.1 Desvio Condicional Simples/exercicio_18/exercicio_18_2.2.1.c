/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 17
*/

/* Bibilotecas*/
#include <stdio.h>

/* Calcular media de 3 valores e indicar as seguitnes circuntancias
* media >= 6 aluno aprovado;
* media >= 5 e < 6 O aluno tem direito a fazer prova extra;
* media >= 4 ou < 5 O aluno tem direito de fazer prova final;
media menor que 4 aluno reprovado*/
int main (){
float a, b, c;
printf("Digite a primeira nota: ");
scanf("%f", &a);
printf("Digite a segunda nota: ");
scanf("%f", &b);
printf("Digite a terceira nota: ");
scanf("%f", &c);
a = (a + b + c) / 3;
if (a >= 6){
    printf("Aluno APROVADO, parabens");
}
else if ((a < 6) && (a >=5)){
    printf("O aluno tem direito de fazer prova extra");
}
else if ((a >= 4) && (a < 5)){
    printf("O aluno tem direito de fazer prova especial");
}
else{
    printf("Aluno reprovado, sinto muito");
}
system("pause>>null");
return 0;
}
