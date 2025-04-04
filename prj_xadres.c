#include <stdio.h>

// A Função recursiva para a movimentação da Torre.
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// Função recursiva para poder mover o Bispo.
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

// Função recursiva para poder mover a Rainha.
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    // Movimentação da Torre (usando recursão)
    printf("Movimento da Torre (Recursivo):\n");
    moverTorreRecursivo(5);

    // Movimentação do Bispo (usando recursão e loops aninhados)
    printf("\n\nMovimento do Bispo (Recursivo e Loops Aninhados):\n");
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1;

    for (int i = 0; i < casasBispoVertical; i++) {
        for (int j = 0; j < casasBispoHorizontal; j++) {
            printf("Cima, Direita\n");
        }
    }

    // Movimento da Rainha (usando recursão)
    printf("\n\nMovimento da Rainha (Recursivo):\n");
    moverRainhaRecursivo(8);

    // Movimento do Cavalo (usando loops complexos)
    printf("\n\nMovimento do Cavalo (Loops Complexos):\n");
    int movimentoVertical = 2;
    int movimentoHorizontal = 1;
    int verticalAtual = 0;
    int horizontalAtual = 0;

    for (int i = 0; i < movimentoVertical; i++) {
        printf("Cima\n");
    }

    while (horizontalAtual < movimentoHorizontal) {
        printf("Direita\n");
        horizontalAtual++;
    }

    return 0;
}
