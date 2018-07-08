/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 04
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
int i, v1[10], v2[10], v3[10];
printf("informe os elementos do seu primeiro conjunto\n");
ler(v1, 10);
printf("informe os elementos do seu segundo conjunto\n");
ler(v2, 10);
for (i = 0; i < 10; i++){
    v3[i] = v1[i] * v2[i];
    printf("%d\n", v3[i]);
}
return 0;
}
