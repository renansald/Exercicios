/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 15
*/

/* Bibilotecas*/
#include <stdio.h>

/* calcula o aumento de salario para as segunites condiçoes;:
• O aumento sera de 30% para que recebe ate 1,5 vezes o salario minimo;
• Quem possui salario maior que 1,5x minimo não recebera aumento*/
int main(){
float salario, minimo, fator;
printf("Indique o salario minimo atual: ");
scanf("%f", &minimo);
printf("Indique o salario do funcionario: ");
scanf("%f", &salario);
fator = salario / minimo;
if ((fator <= 1.5) && (fator >= 1)){
    salario = salario * 1.30;
    printf("O novo salario equivale a %.2f", salario);
}
else if (fator < 1){
    printf("Salario nao consiste com a CLT, procurar seus direitos");
}
else {
    printf("Infelizmente não recebera aumento, mais sorte na proxima vez");
}
system("pause>>null");
return 0;
}
