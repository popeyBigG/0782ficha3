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

// IF p/ a opçao //

if (escolha == 1) {

    strcpy(operacoes, "Multiplicação");
    multiplicacao();

} else if (escolha == 2) {

    strcpy(operacoes, "Divisão");
    divisao();

} else if (escolha == 3) {

    strcpy(operacoes, "Adição");
    adicao();

} else if (escolha == 4) {

    strcpy(operacoes, "Subtração");
    subtracao();

} else {

    printf("Por favor, insira um número valido!\n");
    inputI();

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

printf("\n\nOperação: %s\t\tResultado: %.02lf\n", operacoes, resultado);

}

/* ========================================================================= */