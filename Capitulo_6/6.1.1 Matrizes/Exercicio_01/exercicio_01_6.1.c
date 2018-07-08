/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 35, exercicio 1
*/

#include <stdio.h>
#include <locale.h>

void dados(char alunos[][16], double notas[][2]){
int a, b;
for (a = 0; a < 10; a++){
    printf("Informe o nome do aluno: ");
    scanf("%s", alunos[a]);
    for (b = 0; b < 2; b++){
        printf("Informe a %d nota: ", b+1);
        scanf ("%lf", &notas[a][b]);
    }
}
}

void media(double notas[][2], double medias[]){
int a, b = 0;
for (a = 0; a < 10; a++){
            medias[a] = (notas [a][b] + notas[a][b+1]) / 2;
}
}

void resultados(char alunos [][16], double notas[][2], double medias[]){
int b = 0;
for(int a = 0; a < 10; a++){
    printf ("Aluno %d\nNome: %s\nNota 1: %.2lf\nNota 2: %.2lf\nMédia: %.2lf\n\n", a+1, alunos[a], notas[a][b], notas[a][b+1], medias[a]);
    }
}

int main (){
setlocale (LC_ALL, "portuguese");
char alunos[11][16];
double notas[11][2], medias[11];
dados(alunos, notas);
media(notas, medias);
resultados(alunos, notas, medias);
return 0;
}
