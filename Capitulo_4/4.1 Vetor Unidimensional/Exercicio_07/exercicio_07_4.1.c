/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 07
*/

#include <stdio.h>
#include <locale.h>

void ler(int v[], int n){
int i;
for (i = 0; i < n; i++){
    printf ("Informe o seu %dº número: ", i+1);
    scanf ("%d", &v[i]);
}
}

void impri(int v[], int i){
int n;
for (n = 0; n < i; n++){
    printf ("%d\n", v[n]);
}
}

int main (){
setlocale (LC_ALL, "portuguese");
int v[10], vp[5], vi[5], aux, pos;
pos = 0;
ler(v, 10);
impri (v, 10);
for (aux = 0; aux < 10; aux = aux + 2){
    vp[pos] = v[aux];
    pos = pos + 1;
}
for (aux = 9; aux >= 0; aux = aux - 2){
    pos = pos - 1;
    vi[pos] = v[aux];
    }
printf ("Os valores nas posições ímpares são:\n");
impri(vi, 5);
printf ("Os valores nas posições pares são:\n");
impri(vp, 5);
return 0;
}
