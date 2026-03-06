#include <stdio.h>

int main(){
    char estado1, codigocarta1[5], nomecidade1[20];
    int pontos_turisticos1;
    unsigned long int populacao1; 
    float area_km1, pib1, dens_pop1, pibpcapita1, superpoder1;

    printf("\nCarta 1:\n Digite uma letra de 'A' a 'H' em maiusculo (representando um dos oito estados): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (A letra do estado com um número de 01 a 04): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade sem espaço, ex.:(RioDeJaneiro, SãoPaulo): ");
    scanf("%s", nomecidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área da cidade em Km^2: ");
    scanf("%f", &area_km1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    dens_pop1 = populacao1 / area_km1;

    pibpcapita1 = pib1 * (1000000000) / populacao1;

    superpoder1 = populacao1 + area_km1 + pib1 + pontos_turisticos1 + pibpcapita1 + (1 / dens_pop1);

    printf(" \nCarta 1:\n - Estado: %c\n - Código: %s\n", estado1, codigocarta1);
    printf(" - Cidade: %s\n - População: %lu\n - Área: %.2f km^2\n ", nomecidade1, populacao1, area_km1);
    printf("- PIB: %.2f bilhões de reais\n - Número de Pontos Turísticos: %d\n ", pib1, pontos_turisticos1);
    printf("- Densidade Populacional: %.2f hab/km^2\n", dens_pop1);
    printf("-  PIB per Capita: %.2f reais\n", pibpcapita1);
    printf("- SuperPoder: %.2f\n", superpoder1);

    char estado_carta2[1], codigocarta2[5], nomecidade2[20];
    int pontos_turisticos2;
    unsigned long int populacao2;
    float area_km2, pib2, dens_pop2, pibpcapita2, superpoder2;

    printf("\nCarta 2:\n Digite uma letra de 'A' a 'H' em maiusculo: ");
    scanf("%s", estado_carta2);

    printf("Digite o código da carta (A letra do estado com um número de 01 a 04): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade sem espaço, ex.:(RioDeJaneiro, SãoPaulo): ");
    scanf("%s", nomecidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área da cidade em Km^2: ");
    scanf("%f", &area_km2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    dens_pop2 = populacao2 / area_km2;

    pibpcapita2 = (pib2 * 1000000000) / populacao2;

    superpoder2 = populacao2 + area_km2 + pib2 + pontos_turisticos2 + pibpcapita2 + (1 / dens_pop2);

    printf(" \nCarta 2:\n - Estado: %s\n - Código: %s\n", estado_carta2, codigocarta2);
    printf(" - Cidade: %s\n - População: %lu\n - Área: %f km^2\n ", nomecidade2, populacao2, area_km2);
    printf("- PIB: %.2f bilhões de reais\n - Número de Pontos Turísticos: %d\n ", pib2, pontos_turisticos2);
    printf("- Densidade Populacional: %.2f hab/km^2\n", dens_pop2);
    printf(" - PIB per Capita: %.2f reais\n", pibpcapita2);
    printf("- SuperPoder: %.2f\n", superpoder2);

printf("\n-------------------------------------------\n");

int pontos_turisticos, populacao, area_km, pib, dens_pop, pibpcapita, superpoder;

populacao = populacao1 > populacao2;
area_km = area_km1 > area_km2;
pib = pib1 > pib2;
pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
dens_pop = dens_pop1 < dens_pop2;
pibpcapita = pibpcapita1 > pibpcapita2;
superpoder = superpoder1 > superpoder2;

printf("\nCOMPARAÇÃO DE CARTAS:\n");
printf("Se o valor for (1) a carta 1 ganhou, se o valor for (0) a carta 2 ganhou!\n");
printf("População: (%d)\n", populacao);
printf("Área: (%d)\n", area_km);
printf("PIB: (%d)\n", pib);
printf("Pontos Turísticos: (%d)\n", pontos_turisticos);
printf("Densidade Populacional: (%d)\n", dens_pop);
printf("PIB per capita: (%d)\n", pibpcapita);
printf("Super Poder: (%d)\n", superpoder);

return 0;


}