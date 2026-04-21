#include <stdio.h>

int main(){

    //sintaxe padrão do printf
    //printf("Olá Mundo!");
    //printf("texto com formatação", variavel1, variavel2, ...)

/*  %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.*/

    int idade = 19;
    float altura = 1.81;
    char opcao = 'S';
    char nome[20] = "Carlos";
    
    printf("A altura de %s é: %.2f\n",nome, altura);
    printf("A altura de %s é: %.2f\n",nome, altura);
    printf("A opção de %s é: %c ",nome, opcao);
  

return 0;


}