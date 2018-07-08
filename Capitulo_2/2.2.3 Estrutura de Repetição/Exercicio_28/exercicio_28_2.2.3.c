/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 18, exercico 28
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* conta valores e fala quantos estão no intervalo de 10 a 20 e quantos estão fora*/;
int main(){
setlocale(LC_ALL, "portuguese");
float x;
int dentro, fora;
dentro = fora = 0;
while((fora + dentro) < 10){
    printf("Digite o valor: ");
    scanf("%f", &x);
    if((x >= 10) && (x <= 20)){
        dentro = dentro + 1;
    }
    else{
        fora = fora + 1;
    }
}
printf("Você digitou %d fora do inter;\nE %d dentro do intervalo", fora, dentro);
system("pause>>null");
return 0;
}
