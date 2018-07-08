/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 10
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para fazer uma operação entre dois numeros*/
int main(){
float num1, num2, resultado;
char operacao;
printf("Digite o primeiro numero: ");
scanf("%f", &num1);
printf("Digite o primeiro numero: ");
scanf("%f", &num2);
printf("Digite a operação a ser executada, lembrando que (* corresponde a multiplicacao), (/ corresponde a divisao), (+ corresponde a soma) e (- corresponde a subtracao):");
scanf("%s", &operacao);
if(operacao == '/'){
    resultado = num1 / num2;
    printf("O resultado da divisao de %.2f por %.2f e %.2f", num1, num2, resultado);
} else if(operacao == '*'){
resultado = num1 * num2;
printf("O produto de %.2f x %.2f e %.2f", num1, num2, resultado);
} else if (operacao == '-'){
resultado = num1 - num2;
printf("O resultado de %.2f - %.2f e %.2f", num1, num2, resultado);
} else if (operacao == '+'){
resultado = num1 + num2;
printf(" a soma de %.2f + %.2f e %.2f", num1, num2, resultado);
}else
printf("Operacao invalida");
system("pause>>null");
return 0;
}
