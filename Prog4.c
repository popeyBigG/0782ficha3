#include <stdio.h>
#include <string.h>

// Variaveis globais //

char dia[256] = "Desconhecido";

///////////////////////

int main() {

inputI();
inputF();

return 0;   
}

        /* Funções */

inputI(void) {

int numero;

printf("\nInsira um número inteiro de 1 a 7: ");
scanf("%d", &numero);

switch(numero) {

    case 1:
        strcpy(dia, "Domingo");
    break;
    case 2:
        strcpy(dia, "Segunda-Feira");
    break;
    case 3:
        strcpy(dia, "Terça-Feira");
    break;
    case 4:
        strcpy(dia, "Quarta-Feira");
    break;
    case 5:
        strcpy(dia, "Quinta-Feira");
    break;
    case 6:
        strcpy(dia, "Sexta-Feira");
    break;
    case 7:
        strcpy(dia, "Sábado");
    break;
    default: { printf("Por favor, insira um número valido!\n"); inputI(); }

}
}

inputF(void) {

printf("\nDia da semana: %s\n\n", dia);

}

/* ========================================================================= */