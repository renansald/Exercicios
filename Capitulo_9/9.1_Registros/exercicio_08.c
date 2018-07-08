/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 45, exercicio 08
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
  struct Aluno aluno1;
  int aux = 0;
  double media = 0.0;
  printf("Informe o nome do Aluno: ");
  scanf(" %[^\n]s", &aluno1.nome);
  printf("Informe o curso: ");
  scanf(" %[^\n]s", &aluno1.curso);
  printf("Informe a idade: ");
  scanf("%d", &aluno1.idade);
  do{
  printf("Informe a data de nascimento: ");
  scanf("%d/%d/%d", &aluno1.dataNascimento.dia, &aluno1.dataNascimento.mes, &aluno1.dataNascimento.ano);
  if (((aluno1.dataNascimento.mes == 1) || (aluno1.dataNascimento.mes == 3) || (aluno1.dataNascimento.mes == 5) || (aluno1.dataNascimento.mes == 7) || (aluno1.dataNascimento.mes == 8) || (aluno1.dataNascimento.mes == 10) || (aluno1.dataNascimento.mes == 12)) && (aluno1.dataNascimento.dia > 31)){
      printf ("Data invalida reinsira a data\n");
  }
  else if (((aluno1.dataNascimento.mes == 4) || (aluno1.dataNascimento.mes == 6) || (aluno1.dataNascimento.mes == 9) || (aluno1.dataNascimento.mes == 11)) && (aluno1.dataNascimento.dia > 30)){
      printf ("Data invalida reinsira a data\n");
  }
  else if ((aluno1.dataNascimento.mes == 2) && (aluno1.dataNascimento.dia > 29)){
      printf ("Data invalida reinsira a data\n");
  }
  else
      aux++;
}while(aux == 0);
  for(int a = 0; a < 3; a++){
    printf("Informe a %d nota: ", a+1);
    scanf("%lf", &aluno1.notas[a]);
    if (a == 0){
      media = media +(2 * aluno1.notas[a]);
    }
    else if (a == 1) {
      media = media +(3 * aluno1.notas[a]);
    }
    else
    media = media +(4 * aluno1.notas[a]);
  }
  media = media / 3;
  printf ("Aluno: %s\nCurso: %s\nIdade: %d\nData de Nascimento: %d/%d/%d\nNota 1: %.2lf\nNota 2: %.2lf\nNota 3: %.2lf\nMedia ponderada: %.2lf", aluno1.nome, aluno1.curso, aluno1.idade, aluno1.dataNascimento.dia, aluno1.dataNascimento.mes, aluno1.dataNascimento.ano, aluno1.notas[0], aluno1.notas[1], aluno1.notas[2], media);
  return 0;
}
