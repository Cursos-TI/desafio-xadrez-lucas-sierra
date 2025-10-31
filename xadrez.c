#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// Constantes para os movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    int i;
    
    // Movimento do Bispo - 5 casas na diagonal superior direita
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    for(i = 1; i <= MOV_BISPO; i++) {
        printf("Movimento %d: Cima\n", i);
        printf("Movimento %d: Direita\n", i);
    }
    
    printf("\n");
    
    // Movimento da Torre - 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 1; i <= MOV_TORRE; i++) {
        printf("Movimento %d: Direita\n", i);
    }
    
    printf("\n");
    
    // Movimento da Rainha - 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    for(i = 1; i <= MOV_RAINHA; i++) {
        printf("Movimento %d: Esquerda\n", i);
    }
    
    return 0;
}
