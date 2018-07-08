/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 19, exercico 37
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* indica a média de salários de uma cidade;
*o maior salário;
*média do número de filho;
* percentual de pessoas que recebem até 100,00 R$*/
int main(){
    setlocale(LC_ALL, "");

    /*declaração de variáveis e atribuição de valores*/
    int filhos, aux;
    float salario, menor, media_salario, maior, media_filhos;
    maior= (-1);
    aux = media_filhos = menor = media_salario = 0;

    /*Lógica do problema*/
    while (salario >= 0){
        printf("Informe o salário: ");
        scanf("%f", &salario);

        if((aux == 0) && (salario <= 100)){
            printf("informe o número de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            maior = salario;
            menor = menor + 1;
            aux++;
        }
        else if ((aux == 0) && (salario > 100)){
            printf("informe o número de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            maior = salario;
            aux++;
        }
        else if ((salario > 0) && (salario < maior) && (salario <= 100)){
            printf("informe o número de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            menor = menor + 1;
            aux++;
        }
        else if ((salario > 0) && (salario > maior)){
            printf("informe o número de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            maior = salario;
            aux++;
        }
        else if((salario >0) && (salario < maior) && (salario> 100)){
            printf("informe o número de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            aux++;
        }
    }
    menor = ((menor * 100) / aux); //percentual de salários menores que 100 R$
    media_filhos = (media_filhos / aux);
    media_salario = (media_salario / aux);
    printf("O percentual de pessoas que recebem até 100 R$ é: %.2f;\n", menor);
    printf("A média de filhos é de %.2f;\n", media_filhos);
    printf("A média de salários coresponde a %.2f;\n", media_salario);
    printf("E o maior salário coresponde a %.2f", maior);
    system("pause>>null");
    return 0;
}

