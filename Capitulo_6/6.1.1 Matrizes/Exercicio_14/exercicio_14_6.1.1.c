#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
srand(time(NULL));
int matrix[10][10];
unsigned long long int multl = 1, multc = 1; 
double somal = 0.0, somac = 0.0;
for (int a = 0; a < 10; a++){
    for (int b = 0; b < 10; b++){
        matrix[a][b] = rand()% 11 + 10;
        printf("matriz [%d][%d] = %d\t", a+1, b+1, matrix[a][b]);
    }
    printf ("\n");
    }
for (int a = 0; a < 10; a++){
    for (int b = 0; b < 10; b++){
            somal = somal + matrix[a][b];
            somac = somac + matrix[b][a];
			multl = multl * matrix[a][b];
			multc = multc * matrix[b][a];
    }
	somal = somal / 10.0;
	somac = somac / 10.0;
    printf ("A multiplicacao da linha %d e %llu\nA media da linha %d e %.2lf\nA multiplicacao da coluna %d e %llu\nA media da coluna %d e %.2lf\n", a+1, multl, a+1, somal, a+1, multc, a+1, somac);
    somal = somac = 0;
	multl = multc = 1;
}
return 0;
}
