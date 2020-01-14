#include <stdio.h>

// Variaveis globais

int numero, ant, suc;

////////////////////

int main() {

inputI();
inputF();

return 0; 
}

            /* Funções */

inputI(void) {

printf("Insira um número inteiro: ");
scanf("%d", &numero);

}

inputF(void) {

ant = (numero - 1);
suc = (numero + 1);

printf("Antecessor: %d\t|  Sucessor: %d\n", ant, suc);

}

        /*-------------------------*/