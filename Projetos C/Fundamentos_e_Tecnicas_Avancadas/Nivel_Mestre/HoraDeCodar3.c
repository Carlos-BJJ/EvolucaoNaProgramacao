#include <stdio.h>

int main(){
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminA = 500;
    unsigned int estoqueminB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    printf(" %s tem estoque: %u e o valor unitario: R$%.2f\n", produtoA, estoqueA, valorA);
    printf(" %s tem estoque: %u e o valor unitario: R$%.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA >= estoqueminA;
    resultadoB = estoqueB >= estoqueminB;

    printf("\nO %s tem estoque mínino %d\n", produtoA, resultadoA);
    printf("O %s tem estoque mínino %d\n", produtoB, resultadoB);

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B(R$ %.2f)? (1 = Verdadeiro e 0 = Falso) %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));



}

