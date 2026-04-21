//Procura de elemento na matriz
#include <stdio.h>
 
#define linha 5
#define coluna 5

int main() {
    int matriz[linha][coluna];
    int valores = 1;
    int target;

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            matriz[i][j] = valores;
            valores++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite qual número você quer procurar na matriz: ");
    scanf("%d", &target);

    int found = 0;
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < linha; i++) {      // Loop externo para as linhas
        for (int j = 0; j < coluna; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado nos índices (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}