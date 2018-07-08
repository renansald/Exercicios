/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 17, exercico 14
*/

/* Bibilotecas*/
#include <stdio.h>

/* calcula o IMC e indica as informações sobre o peso do individu da seguinte maneira:
• Para 20<IMC<25 exibe a mensagem que o individuo esta na faixa de peso ideal;
• Para 25<=IMC<30 exibe a mensagem que o individuo esta na faixa de sobre peso;
• Para 30<=IMC<40 exibe a mensagem que o idividuo esta na faixa de obesidade;
• Para IMC>40 exibe que o individuo esta na faixa de obesidade morbida*/

int main(){
float altura, peso;
printf("Indique o massa corporal da pessoa: ");
scanf("%f", &peso);
printf("Indique a altura da pessoa: ");
scanf("%f", &altura);
peso = peso / (altura * altura);
if((peso >= 20) && (peso < 25)){
    printf("O IMC da pessoa equivale a %.2f e indica peso ideal", peso);
}
else if((peso >= 25) && (peso < 30)){
    printf("O IMC da pessoa equivale a %.2f e indica sobre peso", peso);
}
else if ((peso >= 30) && (peso < 40)){
    printf("O IMC da pessoa equivale a %.2f e indica obesidade", peso);
}
else if (peso >= 40) {
    printf("O IMC da pessoa equivale a %.2f e indica obesidade morbida", peso);
}
else{
    printf("calculo inconsistente, valores de entrada errados");
}
system("pause>>null");
return 0;
}
