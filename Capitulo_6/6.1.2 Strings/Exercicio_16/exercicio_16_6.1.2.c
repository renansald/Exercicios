/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Exercico: pagina 37, exercicio 16
*/

#include <stdio.h>

int strch(char string[], char ch){
for (int a = 0; string[a] != '\0'; a++){
    if (string[a] == ch){
        return a+1;
    }
}
return -1;
}

/*int main (){
char string[100], ch;
int ctr;
printf ("Informe a string: ");
scanf("%s", string);
printf("Informe o caracter: ");
scanf(" %c", &ch);
ctr = strch(string, ch);
if (ctr >= 0){
    printf ("O caracter %c esta na posicao %d", ch, ctr);
}
else{
    printf ("Nao existe o caracter %c na frase", ch);
}
return 0;
}
*/
