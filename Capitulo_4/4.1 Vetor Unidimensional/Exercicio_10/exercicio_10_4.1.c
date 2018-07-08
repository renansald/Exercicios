/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 30, exercicio 10
*/

#include <stdio.h>
#include <locale.h>

void matricula (int v[], double v1[], int b){
int aux;
for(aux = 0; aux < b; aux++){
    printf ("Informe o número de matrícula do %d funcionário: ", aux + 1);
    scanf ("%d", &v[aux]);
    printf ("Informe o salário do %d funcionário: ", aux + 1);
    scanf ("%lf", &v1[aux]);
}
}

void aumento (int v[], double v1[], double v2[], int b){
int aux;
for (aux = 0; aux < b; aux++){
    if ((v[aux]%2) == 0){
        v2[aux] = v1[aux] + ((v1[aux] * 15) / 100.0);
    }
    else {
        v2[aux] = v1[aux] + ((v1[aux] * 20) / 100.0);
    }
}
}

void retorno (int v[], double v1[], double v2[], int b){
int aux;
for (aux = 0; aux < b; aux++){
    if ((v[aux]%2) == 0){
    printf("Funcionário %d\n\tmatrícula: %d\n\tSalário base: R$%.2lf\n\tPercentual de aumento: 15%\n\tsalário corrigido: R$%.2lf\n\n", aux+1, v[aux], v1[aux], v2[aux]);
    }
    else {
    printf("Funcionário %d\n\tmatrícula: %d\n\tSalário base: R$%.2lf\n\tPercentual de aumento: 20%\n\tsalário corrigido: R$%.2lf\n\n", aux+1, v[aux], v1[aux], v2[aux]);
    }
}
}

int main (){
setlocale(LC_ALL, "portuguese");
int vm[10];
double s1[10], s2[10];
printf ("Informe os números de matrículas e salários:\n");
matricula (vm, s1, 10);
aumento (vm, s1, s2, 10);
retorno (vm, s1, s2, 10);

return 0;
}
