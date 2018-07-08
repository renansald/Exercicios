/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 13
*/

/* Bibilotecas*/
#include <stdio.h>

/* dados dois valores inteiros entre 1 e 10, calcule e imprima:
• a média dos números, caso a soma deles seja menor que 8;
• o produto entre os números, caso a soma deles seja igual a 8;
• a divisão do maior número pelo menor, caso a soma deles seja maior que 8.*/
int main (){

int num1, num2, resultado;
printf("Digite o primeiro numero: ");
scanf("%d", &num1);
printf("Digite o segundo numero: ");
scanf("%d", &num2);
if ((num1 < 1) || (num1 > 10)){
    printf("O seu numero \"%d\" esta fora do intervalo de 1 a 10\n", num1);
}
else if ((num2 < 1) || (num2 > 10)){
    printf("O seu numero \"%d\" esta fora do intervalo de 1 a 10\n", num2);
}
else if ((num1 + num2) < 8){
    resultado = (num1 + num2) / 2;
    printf("A soma de \"%d\" e \"%d\" e menor que 8 logo a media dos numeros equivale a \"%d\"\n", num1, num2, resultado);
}
else if((num1 + num2) == 8){
    resultado = num1 * num2;
    printf("A soma de \"%d\" e \"%d\" e igual que 8 logo o produto dos numeros equivale a \"%d\"\n", num1, num2, resultado);
}
else if (num1 > num2) {
    resultado = num1 / num2;
printf("A soma de \"%d\" e \"%d\" e maior que 8, e \"%d\" e maior que \"%d\" logo a divisão do maior pelo menor equivale a \"%d\"\n", num1, num2, num1, num2, resultado);
}
else {
resultado = num2 / num1;
printf("A soma de \"%d\" e \"%d\" e maior que 8, e \"%d\" e maior que \"%d\" logo a divisão do maior pelo menor equivale a \"%d\"\n", num1, num2, num2, num1, resultado);
}
system("pause>>null");
return 0;
}
