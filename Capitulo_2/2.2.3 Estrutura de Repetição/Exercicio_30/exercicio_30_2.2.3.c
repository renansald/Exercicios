/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 19, exercico 30
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
int n;
printf("a)\n");
for(n = 1; n <= 7; n++){
    printf("%d\n",n);
}
printf("\n\n c)\n");
for(n = 3; n <= 23; n = n + 5){
    printf("%d\n",n);
}
printf("\n\n c)\n");
for(n = 20; n >= -10; n = n - 6){
    printf("%d\n",n);
}
printf("\n\n d)\n");
for(n = 19; n <= 51; n = n + 8){
    printf("%d\n",n);
}
return 0;
}
