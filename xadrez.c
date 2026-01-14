#include <stdio.h>

// Desafio Nível Novato - Movimentação das Peças de Xadrez
// Peças simuladas: Torre, Bispo e Rainha
// Cada peça utiliza uma estrutura de repetição diferente

int main() {

    /* ==============================
       MOVIMENTO DA TORRE
       Estrutura usada: FOR
       Movimento: 5 casas para a direita
       ============================== */

    int casasTorre = 5;

    // A torre se move em linha reta
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* ==============================
       MOVIMENTO DO BISPO
       Estrutura usada: WHILE
       Movimento: 5 casas na diagonal (Cima + Direita)
       ============================== */

    int casasBispo = 5;
    int contadorBispo = 1;

    // O bispo se move na diagonal
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");

    /* ==============================
       MOVIMENTO DA RAINHA
       Estrutura usada: DO-WHILE
       Movimento: 8 casas para a esquerda
       ============================== */

    int casasRainha = 8;
    int contadorRainha = 1;

    // A rainha se move em todas as direções
    // Aqui simulamos o movimento para a esquerda
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Finaliza o programa
    return 0;
}

