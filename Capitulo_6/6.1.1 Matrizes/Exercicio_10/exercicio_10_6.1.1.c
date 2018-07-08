/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 36, exercicio 10
*/

#include <stdio.h>

int i;

void PrencherMatrix(int matrix [i][i]){
for (int a = 0; a < i; a++){
    for (int b = 0; b < i; b++){
        printf("[%d][%d] = ", a, b);
        scanf ("%d", &matrix[a][b]);
    }
}
}

void SomaLinhaColuna (int matrix[i][i], int vec[], int vec2[]){
int soma, soma2;
soma = soma2 = 0;
for(int a = 0; a < i; a++){
    for(int b = 0; b < i; b++){
        soma = soma + matrix[a][b];
        soma2 = soma2 + matrix[b][a];
    }
    vec[a] = soma;
    vec2[a] = soma2;
    soma = soma2 = 0;
}
}

int SomaDiagonalPrincipal(int matrix[i][i]){
int soma = 0;
for (int a = 0; a < i; a++){
    soma = soma + matrix[a][a];
}
return soma;
}

int SomaDiagonalSecundaria(int matrix[i][i]){
int b = (i - 1);
int soma = 0;
for (int a = 0; a < i; a++){
    soma = soma + matrix[a][b];
    b--;
}
return soma;
}

int QuadradoMagico (int linhas[], int colunas[], int somadp, int somads){
int linhaVerificador, colunaVerificador;
for (int a = 0; a < (i - 1); a++){
    if (linhas[a] != linhas[a + 1]){
        linhaVerificador = 0;
        return 0;
    }
    else{
        linhaVerificador = 1;
    }
}
for (int a = 0; a < (i - 1); a++){
    if (colunas[a] != colunas[a + 1]){
        colunaVerificador = 0;
        return 0;
    }
    else{
        colunaVerificador = 1;
    }
}
if ((colunaVerificador == 1) && (linhaVerificador == 1)){
    if ((colunas[0] == linhas [0]) && (colunas[0] == somadp) && (colunas[0] == somadp))
        return 1;
}
return 0;
}
int main(){
    int somadp, somads;
    printf("Informe o tamanho da matriz: ");
    scanf ("%d", &i);
    int matrix[i][i], somal [i], somac[i];
    PrencherMatrix(matrix);
    SomaLinhaColuna(matrix, somal, somac);
    somadp = SomaDiagonalPrincipal(matrix);
    somads = SomaDiagonalSecundaria(matrix);
    printf("A soma da Diagonal princiapl = %d\nA soma da Diagonal secundaria = %d\n", somadp, somads);
    for(int a = 0; a < i; a++){
        printf("Soma linha %d = %d\nSoma Coluna %d = %d\n", a+1, somal[a], a+1, somac[a]);
    }
    i = QuadradoMagico(somal, somac, somadp, somads);
    if (i == 1){
        printf("E um quadrado mágico");
    }
    else{
        printf("Não é um quadrado mágico");
    }

return 0;
}
