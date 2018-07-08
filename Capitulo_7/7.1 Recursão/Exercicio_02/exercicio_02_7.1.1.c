/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 39, exercicio 02
*/

/* Bibilotecas*/
#include <stdio.h>

int procurar(float v[], int n, float valor){
  if (v[n] == valor){
    return n;
  }
  else if (n == 0){
    return -1;
  }
  else{
    return procurar(v, n-1, valor);
  }
}

/*int main(int argc, char const *argv[]) {
  int n;
  printf ("Informe o tamanho do vetor: ");
  scanf ("%d", &n);
  float v[n], valor;
  for(int a = 0; a < n; a++){
    printf ("Informe o valor do v[%d]: ", a+1);
    scanf ("%f", &v[a]);
  }
  printf("Informe o valor a ser procurado: ");
  scanf("%f", &valor);
  n = procurar (v, n, valor);
  if (n > -1){
    printf ("O valor esta no v[%d]", n);
  }
  else{
    printf ("O valor nao existe no vetor");
  }
  return 0;
}
*/
