/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: pagina 19, exercico 37
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

/* indica a m�dia de sal�rios de uma cidade;
*o maior sal�rio;
*m�dia do n�mero de filho;
* percentual de pessoas que recebem at� 100,00 R$*/
int main(){
    setlocale(LC_ALL, "");

    /*declara��o de vari�veis e atribui��o de valores*/
    int filhos, aux;
    float salario, menor, media_salario, maior, media_filhos;
    maior= (-1);
    aux = media_filhos = menor = media_salario = 0;

    /*L�gica do problema*/
    while (salario >= 0){
        printf("Informe o sal�rio: ");
        scanf("%f", &salario);

        if((aux == 0) && (salario <= 100)){
            printf("informe o n�mero de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            maior = salario;
            menor = menor + 1;
            aux++;
        }
        else if ((aux == 0) && (salario > 100)){
            printf("informe o n�mero de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            maior = salario;
            aux++;
        }
        else if ((salario > 0) && (salario < maior) && (salario <= 100)){
            printf("informe o n�mero de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            menor = menor + 1;
            aux++;
        }
        else if ((salario > 0) && (salario > maior)){
            printf("informe o n�mero de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            maior = salario;
            aux++;
        }
        else if((salario >0) && (salario < maior) && (salario> 100)){
            printf("informe o n�mero de filho: ");
            scanf("%d", &filhos);
            media_filhos = (filhos + media_filhos);
            media_salario = (salario + media_salario);
            aux++;
        }
    }
    menor = ((menor * 100) / aux); //percentual de sal�rios menores que 100 R$
    media_filhos = (media_filhos / aux);
    media_salario = (media_salario / aux);
    printf("O percentual de pessoas que recebem at� 100 R$ �: %.2f;\n", menor);
    printf("A m�dia de filhos � de %.2f;\n", media_filhos);
    printf("A m�dia de sal�rios coresponde a %.2f;\n", media_salario);
    printf("E o maior sal�rio coresponde a %.2f", maior);
    system("pause>>null");
    return 0;
}

