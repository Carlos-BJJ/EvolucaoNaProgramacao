#include <stdio.h>
#include <math.h>
/*
Adicionei a biblioteca com funções matemáticas para usar a exponeciação
no calculo do PibperCapita
*/

int main(){
//Declaração as variáveis    
    char estado1, codigocarta1[5], nomecidade1[20];
    int pontos_turisticos1;
    unsigned long int populacao1; 
    float area_km1, pib1, dens_pop1, pibpcapita1, superpoder1;

//Entrada de dados do usuário    
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

//calculo da densidade populacional e pib per capita
    dens_pop1 = populacao1 / area_km1;

    pibpcapita1 = pib1 * (pow(10,9)) / populacao1;

    superpoder1 = populacao1 + area_km1 + pib1 + pontos_turisticos1 + pibpcapita1 + (1 / dens_pop1);

//Saída de dados das cartas
    printf(" \nCarta 1:\n - Estado: %c\n - Código: %s\n", estado1, codigocarta1);
    printf(" - Cidade: %s\n - População: %lu\n - Área: %.2f km^2\n ", nomecidade1, populacao1, area_km1);
    printf("- PIB: %.2f bilhões de reais\n - Número de Pontos Turísticos: %d\n ", pib1, pontos_turisticos1);
    printf("- Densidade Populacional: %.2f hab/km^2\n", dens_pop1);
    printf("-  PIB per Capita: %.2f reais\n", pibpcapita1);
    printf("- SuperPoder: %.2f\n", superpoder1);

//Repetição das mesmas etapas para a segunda carta
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

    pibpcapita2 = pib2 * (pow(10,9)) / populacao2;

    superpoder2 = populacao2 + area_km2 + pib2 + pontos_turisticos2 + pibpcapita2 + (1 / dens_pop2);

    printf(" \nCarta 2:\n - Estado: %s\n - Código: %s\n", estado_carta2, codigocarta2);
    printf(" - Cidade: %s\n - População: %lu\n - Área: %f km^2\n ", nomecidade2, populacao2, area_km2);
    printf("- PIB: %.2f bilhões de reais\n - Número de Pontos Turísticos: %d\n ", pib2, pontos_turisticos2);
    printf("- Densidade Populacional: %.2f hab/km^2\n", dens_pop2);
    printf(" - PIB per Capita: %.2f reais\n", pibpcapita2);
    printf("- SuperPoder: %.2f\n", superpoder2);

printf("\n-------------------------------------------\n");

int escolha;

//Comparação de cartas com estruturas condicionais

printf(" ** Comparação de Cartas ** \n");
printf("Qual atributo você quer comparar:\n");
printf("[1] População:\n");
printf("[2] Área(km2):\n");
printf("[3] PIB:\n");
printf("[4] Pontos turísticos:\n");
printf("[5] Densidade Populacional:\n");
printf("[6] PIB per capita:\n");
printf("[7] Super Poder:\n");
printf("[8] Não comparar(encerrar o jogo):\n");
scanf("%d", &escolha);

switch (escolha){
    case 1:
        printf("-Cidade 1: %s\n", nomecidade1);
        printf("-Cidade 2: %s\n", nomecidade2);
        printf("-O atributo escolhido na comparação foi População\n");
        printf("-Populução 1: %d\n",populacao1);
        printf("-Populução 2: %d\n",populacao2);
        if(populacao1 > populacao2){
            printf("A carta 1 venceu!");
        }
        else if(populacao1 == populacao2){
            printf("Empate!");
        }
        else{
            printf("A carta 2 venceu!");
        }
    break;

    case 2:
        printf("-Cidade 1: %s\n", nomecidade1);
        printf("-Cidade 2: %s\n", nomecidade2);
        printf("-O atributo escolhido na comparação foi Área\n");
        printf("-Área 1: %.2f\n",area_km1);
        printf("-Área 2: %.2f\n",area_km2);
        if(area_km1 > area_km2){
            printf("A carta 1 venceu!");
        }
        else if(area_km1 == area_km2){
            printf("Empate!");
        }
        else{
            printf("A carta 2 venceu!");
        }
    break;

    case 3:
        printf("-Cidade 1: %s\n", nomecidade1);
        printf("-Cidade 2: %s\n", nomecidade2);
        printf("-O atributo escolhido na comparação foi PIB\n");
        printf("-PIB 1: %.2f\n",pib1);
        printf("-PIB 2: %.2f\n",pib2);
        if(pib1 > pib2){
            printf("A carta 1 venceu!");
        }
        else if(pib1 == pib2){
            printf("Empate!");
        }
        else{
            printf("A carta 2 venceu!");
        }
    break;

    case 4:
        printf("-Cidade 1: %s\n", nomecidade1);
        printf("-Cidade 2: %s\n", nomecidade2);
        printf("-O atributo escolhido na comparação foi Pontos Turísticos\n");
        printf("-Pontos Turísticos 1: %d\n",pontos_turisticos1);
        printf("-Pontos Turísticos 2: %d\n",pontos_turisticos2);
        if(pontos_turisticos1 > pontos_turisticos2){
            printf("A carta 1 venceu!");
        }
        else if(pontos_turisticos1 == pontos_turisticos2){
            printf("Empate!");
        }
        else{
            printf("A carta 2 venceu!");
        }
    break;

    case 5:
        printf("-Cidade 1: %s\n", nomecidade1);
        printf("-Cidade 2: %s\n", nomecidade2);
        printf("-O atributo escolhido na comparação foi Densidade Populacional\n");
        printf("-Densidade Populacional 1: %.2f\n", dens_pop1);
        printf("-Densidade Populacional 2: %.2f\n", dens_pop2);
        if(dens_pop1 < dens_pop2){
            printf("A carta 1 venceu!");
        }
        else if(dens_pop1 == dens_pop2){
            printf("Empate!");
        }
        else{
            printf("A carta 2 venceu!");
        }
    break;

    case 6:
        printf("-Cidade 1: %s\n", nomecidade1);
        printf("-Cidade 2: %s\n", nomecidade2);
        printf("-O atributo escolhido na comparação foi PIBpercapita\n");
        printf("-PIBpercapita 1: %.2f\n",pibpcapita1);
        printf("-PIBpercapita 2: %.2f\n",pibpcapita2);
        if(pibpcapita1 < pibpcapita2){
            printf("A carta 1 venceu!");
        }
        else if(pibpcapita1 == pibpcapita2){
            printf("Empate!");
        }
        else{
            printf("A carta 2 venceu!");
        }
    break;

    case 7:
        printf("-Cidade 1: %s\n", nomecidade1);
        printf("-Cidade 2: %s\n", nomecidade2);
        printf("-O atributo escolhido na comparação foi o Super Poder\n");
        printf("-Super Poder 1: %.2f\n",superpoder1);
        printf("-Super Poder 1: %.2f\n",superpoder2);
        if(superpoder1 < superpoder2){
            printf("A carta 1 venceu!");
        }
        else if(superpoder1 == superpoder2){
            printf("Empate!");
        }
        else{
            printf("A carta 2 venceu!");
        }
    break;

    case 8:
        printf("Você encerrou o jogo!");
        return 0;    
    break;
}

}