/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 46, exercicio 09
*/

/* Bibilotecas*/
#include <stdio.h>

struct Data{
int dia, mes, ano;
};

struct Aluno{
  char nome[51], curso[51];
  int idade;
  struct Data dataNascimento;
  double notas[3];
};

int main(int argc, char const *argv[]) {
  int aux = 0, n;
  printf("Informe o numero de alunos: ");
  scanf("%d", &n);
  struct Aluno aluno1[n];
  double media[n];
  for (int b = 0; b < n; b++){
  printf("Informe o nome do %d aluno: ", b+1);
  scanf(" %[^\n]s", &aluno1[b].nome);
  printf("Informe o curso do %d aluno: ", b+1);
  scanf(" %[^\n]s", &aluno1[b].curso);
  printf("Informe a idade do %d aluno: ", b+1);
  scanf("%d", &aluno1[b].idade);
  do{
  printf("Informe a data de nascimento do %d aluno: ", b+1);
  scanf("%d/%d/%d", &aluno1[b].dataNascimento.dia, &aluno1[b].dataNascimento.mes, &aluno1[b].dataNascimento.ano);
  if (((aluno1[b].dataNascimento.mes == 1) || (aluno1[b].dataNascimento.mes == 3) || (aluno1[b].dataNascimento.mes == 5) || (aluno1[b].dataNascimento.mes == 7) || (aluno1[b].dataNascimento.mes == 8) || (aluno1[b].dataNascimento.mes == 10) || (aluno1[b].dataNascimento.mes == 12)) && (aluno1[b].dataNascimento.dia > 31)){
      printf ("Data invalida reinsira a data\n");
  }
  else if (((aluno1[b].dataNascimento.mes == 4) || (aluno1[b].dataNascimento.mes == 6) || (aluno1[b].dataNascimento.mes == 9) || (aluno1[b].dataNascimento.mes == 11)) && (aluno1[b].dataNascimento.dia > 30)){
      printf ("Data invalida reinsira a data\n");
  }
  else if ((aluno1[b].dataNascimento.mes == 2) && (aluno1[b].dataNascimento.dia > 29)){
      printf ("Data invalida reinsira a data\n");
  }
  else
      aux++;
  }while(aux == 0);
  aux = 0;
  media[b] = 0;
  for(int a = 0; a < 3; a++){
    printf("Informe a %d nota do %d aluno: ", b+1, a+1);
    scanf("%lf", &aluno1[b].notas[a]);
    if (a == 0){
      media[b] = media[b] + (2 * aluno1[b].notas[a]);
    }
    else if (a == 1) {
      media[b] = media[b] + (3 * aluno1[b].notas[a]);
    }
    else
    media[b] = media[b] + (4 * aluno1[b].notas[a]);
  }
  media[b] = media[b] / 3;
  }
  for(int a = 0; a < n; a++){
  printf ("\n\nAluno: %s\nCurso: %s\nIdade: %d\nData de Nascimento: %d/%d/%d", aluno1[a].nome, aluno1[a].curso, aluno1[a].idade, aluno1[a].dataNascimento.dia, aluno1[a].dataNascimento.mes, aluno1[a].dataNascimento.ano);
  for(int b = 0; b < 3; b++){
    printf("\nNota %d: %lf", b+1, aluno1[a].notas[b]);
  }
  printf ("\nMedia: %lf", media[a]);
  }
  return 0;
}
