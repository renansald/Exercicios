#include <stdio.h>
#include <ctype.h>

void strupr(char str[]){
for (int a = 0; str[a] != '\0'; a++){
    if ((str [a] != '\0')){
    str[a] = (toupper (str[a]));
  }
}
}

int main (){
  char str[101];
  printf ("Informe sua frase: ");
  scanf ("%[^\n]s", str);
  strupr(str);
  printf ("%s", str);
  return 0;
}
