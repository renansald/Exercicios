/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 16, exercico 06
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para informar se o � possivel ou n�o doar sangue*/
int main (){
float idade, peso;
char nome[50];
printf("Nome do doador: ");
scanf("%s", &nome);
printf("Idade do doador: ");
scanf("%f", &idade);
printf("Peso do doador: ");
scanf("%f", &peso);
if((idade < 18) || (idade > 67)){
    printf("%s n�o pode ser doador pois sua idade n�o esta na faixa de 18 a 67 anos", nome);
}
else if (peso < 50){
    printf("%s n�o pode ser doador pois seu peso � menor que o minimo exigido de 50 Kg", nome);
}
else{
    printf("%s pode ser doador de sangue, parabens pela atitude", nome);
}
system("pause>>null");
return 0;
}
