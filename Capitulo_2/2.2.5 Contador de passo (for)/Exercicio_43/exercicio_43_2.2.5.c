/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: pagina 20, exercico 43
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");
int n, aux, fibonacci_1, fibonacci_2;
printf ("Insira a quntidade de termos da sequência de Fibonacci você deseja: ");
scanf ("%d", &n);
for (aux = 0; aux < n; aux++){
    if ((aux == 0)||(aux == 1)){
        fibonacci_1 = 1;
        fibonacci_2 = 1;
        printf ("%d\n", fibonacci_1);
    }
    else if ((aux %2) == 0){
    fibonacci_2 = fibonacci_1 + fibonacci_2;
    printf ("%d\n", fibonacci_2);
    }
    else{
        fibonacci_1 = fibonacci_1 + fibonacci_2;
        printf("%d\n", fibonacci_1);
    }

    }
return 0;
}
