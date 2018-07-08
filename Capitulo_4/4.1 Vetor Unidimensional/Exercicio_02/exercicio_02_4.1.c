/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 29, exercicio 02
*/

#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int i, v[20], s;
double media;
s = 0;
for (i = 0; i < 20; i++){
    printf ("Informe o seu %dº número: ", i+1);
    scanf ("%d", &v[i]);
    if (v[i] < 0){
        printf ("Os valores devem ser positivos, por favor reinsira o número");
        i = i - 1;
    }
    else {
        s = s + v[i];
    }
}
media = (s * 1.0) / 20;
printf("%lf\n", media);
for (i = 0; i < 20; i++){
    if (v[i] < media){
    printf ("%d\n", v[i]);
    }
}
return 0;
}
