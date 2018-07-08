/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 09
*/

#include <stdio.h>
#include <locale.h>

void notas (double v[], double v1[], int b){
int aux;
for (aux = 0; aux < b; aux++){
    printf("Informe a nota 1 do aluno %d: ", aux +1);
    scanf ("%lf", &v[aux]);
    printf("Informe a nota 2 do aluno %d: ", aux +1);
    scanf ("%lf", &v1[aux]);
    printf("\n\n");
}
}

void medias (double v[], double v1[], double v3[], int b){
int aux;
for (aux = 0; aux < b; aux++){
    v3[aux] = (v[aux] + v1 [aux]) / 2.0;
}
}

void resultado (double v[], double v1[], double v2[], int b){
int aux;
for (aux = 0; aux < b; aux++){
    printf("Aluno %d\n", aux + 1);
    printf ("Nota 1 = %.2lf\nNota 2 = %.2lf\nMédia = %.2lf\n\n", v[aux], v1[aux], v2[aux]);
}
}

int main (){
setlocale (LC_ALL, "portuguese");
double v1[10], v2[10], vm[10];
printf("Informe a primeira e segunda nota de cada aluno\n");
notas (v1, v2, 10);
medias (v1, v2, vm, 10);
resultado (v1, v2, vm, 10);
return 0;
}
