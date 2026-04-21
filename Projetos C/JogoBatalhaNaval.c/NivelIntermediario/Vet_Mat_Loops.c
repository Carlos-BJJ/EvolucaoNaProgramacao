#include <stdio.h>
 
int main() {
    //Vetores com loops

    int vetor[5]; // Declaração de um vetor de 5 inteiros
 
    // Inicialização do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; // Atribuindo valores ao vetor
    }
 
    // Exibindo os elementos do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        /* A linha abaixo pode ser simplificada,
        se colocada no loop anterior */
        printf("%d ", vetor[i]);
    }
 
printf("\n================================================\n");
    
    //Matrizes com loops

    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros
 
    // Inicialização da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j; // Atribuindo valores à matriz
            /* A linha abaixo foi simplificada,
            por ter sido colocada no loop de inicialização */
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
