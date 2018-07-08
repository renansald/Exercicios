/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 06
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


int main (){
setlocale(LC_ALL, "portuguese");
int v[20], v1[20], i, aux;
aux = 19;
ler(v, 20);
printf("\n\n");
for (i = 0; i < 20; i++){
    printf ("%d\n", v[i]);
}
for (i = 0; i < 20; i++){
    v1[aux] = v[i];
    aux = aux - 1;
}
printf("\n\n");
for (i = 0; i < 20; i++){
    printf ("%d\n", v1[i]);
}
return 0;
}
