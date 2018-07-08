/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 16, exercico 06
*/

/* Bibilotecas*/
#include <stdio.h>

/* app para informar se o é possivel ou não doar sangue*/
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
    printf("%s não pode ser doador pois sua idade não esta na faixa de 18 a 67 anos", nome);
}
else if (peso < 50){
    printf("%s não pode ser doador pois seu peso é menor que o minimo exigido de 50 Kg", nome);
}
else{
    printf("%s pode ser doador de sangue, parabens pela atitude", nome);
}
system("pause>>null");
return 0;
}
