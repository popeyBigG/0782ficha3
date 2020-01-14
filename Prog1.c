#include <stdio.h>


// Variaveis globais //

double tFah, tGra;

///////////////////////

int main() {

inputFah();
FahConversion();

return 0;
}

inputFah(void) {

printf("Insira a temperatura em graus Fahrenheit: ");
scanf("%lf", &tFah);

}

FahConversion(void) {

tGra = (tFah - 32) * 5 / 9;

printf("\n%.02lf Fahrenheit = %.02lf graus\n", tFah, tGra);

}