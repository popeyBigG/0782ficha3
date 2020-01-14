#include <stdio.h>
#include <string.h>

// Variaveis globais //

char operacoes[256] = "Desconhecida";
double resultado, numero1, numero2;

///////////////////////

int main() {

inputI();
inputF();

return 0;   
}

        /* Funções */

inputI(void) {

int escolha;


printf(R"EOF(
+-------------------+
|       Opção       |  
+-------------------+
| 1 - Multiplicação |
| 2 - Divisão       | 
| 3 - Adição        |
| 4 - Subtração     |
+-------------------+
)EOF");

printf("\nInsira um número para a opção correspondente: ");
scanf("%d", &escolha);

// Switch p/ a opçao //
switch(escolha) {

    case 1:
        strcpy(operacoes, "Multiplicação");
        multiplicacao();
    break;
    case 2:
        strcpy(operacoes, "Divisão");
        divisao();
    break;
    case 3:
        strcpy(operacoes, "Adição");
        adicao();
    break;
    case 4:
        strcpy(operacoes, "Subtração");
        subtracao();
    break;
    default: { printf("Por favor, insira um número valido!\n"); inputI(); }

}
}

inputNumeros(void) {
// Função para o utilizador introduzir os valores //
printf("\nInsira o 1º número: ");
scanf(" %lf", &numero1);

printf("\nInsira o 2º número: ");
scanf(" %lf", &numero2);
}

// Funções de cada operacao //

multiplicacao(void) {

inputNumeros();

// -- //

resultado = (numero1 * numero2);

}

divisao(void) {

inputNumeros();

// -- //

resultado = (numero1 / numero2);

}

adicao(void) {

inputNumeros();

// -- //

resultado = (numero1 + numero2);

}

subtracao(void) {

inputNumeros();

// -- //

resultado = (numero1 + numero2);

}

/* ========================================================================= */

inputF(void) {

printf("\n\nOperação: %s\tResultado: %.02lf\n", operacoes, resultado);

}

/* ========================================================================= */