/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 05
*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

void ler(int v[], int n){
int i;
for (i = 0; i < n; i++){
    printf ("Informe o seu %dº número: ", i+1);
    scanf ("%d", &v[i]);
}
}

int maior(int v[], int n){
int i, maior;
maior = INT_MIN;
for (i = 1; i < n; i++){
        if (v[i] > maior){
            maior = i;
        }
}
return maior;
}

int menor(int v[], int n){
int i, menor;
menor = INT_MAX;
for (i = 0; i < n; i++){
        if (v[i] < menor){
            menor = i;
        }
}
return menor;
}

int main (){
setlocale(LC_ALL, "portuguese");
int v[80], ma, me;
ler (v, 80);
ma = maior (v, 80);
me = menor (v, 80);
printf("O seu maior valor é o que está na posição %d e corresponde a %d\nO seu menor valor é o que está na posição %d e corresponde a %d", ma, v[ma], me, v[me]);
}
