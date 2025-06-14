#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez
// Movimentação das Peças

int main() {
    int i; // variável de controle dos loops

    // Movimento da Torre (FOR loop): movimento horizontal de 5 casas para a direita.
    // Usado a estrutura for, pois se sabe exatamente quantas vezes a peça vai se mover
    printf("Movimento da Torre:\n");

    for(i = 1; i <= 5; i++){
        // A cada iteração, representa o movimento de uma casa para a direita
        printf("Casa %d: direita\n", i);  
    }

    // Movimento do Bispo (While loop): movimento de  5 casas na diagonal para cima e à direita
    // O While só continua enquanto a condição for verdadeira, sempre checa a condição antes de fazer, quando não se sabe quantas vezes algo vai acontecer
    printf("\nMovimento do Bispo:\n");

    i = 1; // Reinicializa o contador
    while(i <= 5){
        // A cada passo, o Bispo sobe uma linha e vai uma coluna à direita
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }
    
    // Movimento da Rainha (DO-While loop): movimento horizontal de 8 casas para a esquerda
    // O Do-While executa primeiro sem checar a condição, ele vai fazer pelo menos uma vez, mesmo se a condição for falsa
    printf("\nMovimento da Rainha:\n");
    
    i = 1; // Reinicializa o contador
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while(i <= 8);
    
    // Variáveis que definem o movimento do cavalo
    printf("\nMovimento do cavalo em L:\n");

    int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'

    // Loop externo com (While)

    while (movimentoCompleto--)
    {
       for (int i = 0; i < 2; i++) {
            printf("Cima\n"); // Imprime "cima" duas vezes
       }
       printf("Direita\n"); // Imprime "direita" uma vez
    }

       return 0;
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    

