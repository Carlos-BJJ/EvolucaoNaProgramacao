#include <stdio.h>

void recursiveLoop(int n) {
    if (n > 0) {
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
        printf("%d ", n);
    }
}
 
int main() {
    int numero = 10;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}