/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 19, exercico 33
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* leitura de varios valores informa a média dos valores, quantidade de numeros positvos,
numeros negativos e o percentual de cada numero*/
int main()
{
setlocale(LC_ALL, "");
int aux, aux1;
float x, nn, np, resultado;

np = nn = 0;
aux = 0;
aux1 = 1;
resultado = 0;

while(x != 0){
    printf("Digite o %dº número: ", aux1);
    scanf("%f", &x);
    resultado = resultado + x;
    aux1++;

    if (x > 0){
        np = (np + 1);
        aux++;
    }
    else if (x < 0){
        nn = (nn+1);
        aux++;
    }
    else if(x == 0){
        printf("A quantidade de números negativos corresponde a %.0f;\n", nn);
printf("A quantidade de números positivos coresponde a %.0f;\n", np);
resultado = (resultado / aux);
printf("A média dos números corresponde a %.2f;\n", resultado);
nn = ((nn *100) / (nn + np));
np = (100 - nn);
printf("Você digitou %.2f porcento de números positivos e %.2f porcento de números negativos", np, nn);
    }
}
system("pause>>null");
return 0;
}
