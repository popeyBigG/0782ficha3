#include <stdio.h>

////////   Const globais ////////////

const double importancia = 500000.00;

const double primeiroPer = 0.46;
const double segundoPer = 0.32;

////////////////////////////////////

// Variaveis globais

double primeiro;
double segundo;
double terceiro;

////////////////////

int main() {

calcs();
inputF();

return 0; 
}

            /* Funções */

calcs(void) {

primeiro = (importancia * primeiroPer);

segundo = (importancia * segundoPer);

terceiro = (importancia) - (primeiro + segundo);

}

inputF(void) {

printf("\nPrimeiro %.02lf\tSegundo: %.02lf\tTerceiro: %.02lf\n", primeiro, segundo, terceiro);

}
        /*-------------------------*/