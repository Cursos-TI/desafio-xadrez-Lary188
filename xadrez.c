#include <stdio.h>

int main(void) {
    // Nível Novato - Movimentação das Peças
    int torre, bispo, cavalo, rainha;
    torre = 8, bispo = 8, cavalo = 3, rainha = 8;
     
    // Implementação de Movimentação da Torre
    for (int i = 0; i < torre; i++) {
        printf("Torre - direita: %d\n", i);
    }

    // Implementação de Movimentação do Bispo
    int i = 0;
    while (i < bispo) {
        printf("Bispo - diagonal direita: %d\n", i);
        i++;
    }

    // Nível Aventureiro - Movimentação da Rainha
    int j = 0;
    do {
        printf("Rainha - esquerda: %d\n", j);
        j++;
    } while (j < rainha);
    
    return 0;
}
