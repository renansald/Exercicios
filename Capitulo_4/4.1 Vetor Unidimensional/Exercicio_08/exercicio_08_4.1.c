/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 08
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

int eh_multiplo (int a, int b){
if ((a%b) == 0){
    return 1;
}
else{
    return 0;
}
}

int main (){
setlocale (LC_ALL, "portuguese");
int v[10], n, v2[10], aux;
printf ("Informe o número base de teste: ");
scanf("%d", &n);
printf("Informe os 10 números a serem testados:\n");
ler (v, 10);
for (aux = 0; aux < 10; aux ++){
    v2[aux]= eh_multiplo (v[aux], n);
}
impri(v2, 10);
return 0;
}
