#include <stdio.h>

int main(){
    char estado1, codigocarta1[5], nomecidade1[20];
    int populacao1, pontos_turisticos1;
    float area_km1, pib1;

    printf("\nCarta 1:\n Digite uma letra de 'A' a 'H' em maiusculo (representando um dos oito estados): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (A letra do estado com um número de 01 a 04): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade sem espaço, ex.:(RioDeJaneiro, SãoPaulo): ");
    scanf("%s", nomecidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da cidade em Km^2: ");
    scanf("%f", &area_km1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf(" \nCarta 1:\n - Estado: %c\n - Código: %s\n", estado1, codigocarta1);
    printf(" - Cidade: %s\n - População: %d\n - Área: %f km^2\n ", nomecidade1, populacao1, area_km1);
    printf("- PIB: %f bilhões de reais\n - Número de Pontos Turísticos: %d\n ", pib1, pontos_turisticos1);


    char estado_carta2[1], codigocarta2[5], nomecidade2[20];
    int populacao2, pontos_turisticos2;
    float area_km2, pib2;

    printf("\nCarta 2:\n Digite uma letra de 'A' a 'H' em maiusculo: ");
    scanf("%S", estado_carta2);

    printf("Digite o código da carta (A letra do estado com um número de 01 a 04): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade sem espaço, ex.:(RioDeJaneiro, SãoPaulo): ");
    scanf("%s", nomecidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da cidade em Km^2: ");
    scanf("%f", &area_km2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf(" \nCarta 2:\n - Estado: %s\n - Código: %s\n", estado_carta2, codigocarta2);
    printf(" - Cidade: %s\n - População: %d\n - Área: %f km^2\n ", nomecidade2, populacao2, area_km2);
    printf("- PIB: %f bilhões de reais\n - Número de Pontos Turísticos: %d\n ", pib2, pontos_turisticos2);

return 0;


}