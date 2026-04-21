#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    int soma1 = a + b;
    int diferenca1 = a - b;
    int produto1 = a * b;
    int quociente1 = a / b; /* Note que a divisão de inteiros 
    resulta em um número inteiro */
 
    printf("Soma: %d\n", soma1);
    printf("Diferença: %d\n", diferenca1);
    printf("Produto: %d\n", produto1);
    printf("Quociente: %d\n", quociente1);

printf("----------------------------------------\n");

    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisão de ponto flutuante
 
    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

return 0;
}
