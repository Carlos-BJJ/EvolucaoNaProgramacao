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

int escolha1, escolha2;

//Comparação de cartas com estruturas condicionais

printf(" ** Atributos Da Carta 1 ** \n");
printf("Qual atributo você quer comparar:\n");
printf("[1] População:\n");
printf("[2] Área(km2):\n");
printf("[3] PIB:\n");
printf("[4] Pontos turísticos:\n");
printf("[5] Densidade Populacional:\n");
printf("[6] PIB per capita:\n");
printf("[7] Super Poder:\n");
printf("[8] Não comparar(encerrar o jogo):\n");
scanf("%d", &escolha1);

switch (escolha1)
{
    case 1:
        printf("\n** Compare Novamente **\n");
        printf("Escolha o segundo atributo de comparação:\n");
        printf("[2] Área(km2):\n");
        printf("[3] PIB:\n");
        printf("[4] Pontos turísticos:\n");
        printf("[5] Densidade Populacional:\n");
        printf("[6] PIB per capita:\n");
        printf("[7] Super Poder:\n");
        printf("[8] Não comparar(encerrar o jogo):\n");
        scanf("%d", &escolha2);
    break;

    case 2:
        printf("\n** Compare Novamente **\n");
        printf("Escolha o segundo atributo de comparação:\n");
        printf("[1] População:\n");
        printf("[3] PIB:\n");
        printf("[4] Pontos turísticos:\n");
        printf("[5] Densidade Populacional:\n");
        printf("[6] PIB per capita:\n");
        printf("[7] Super Poder:\n");
        printf("[8] Não comparar(encerrar o jogo):\n");
        scanf("%d", &escolha2);
    break;

    case 3:
        printf("\n** Compare Novamente **\n");
        printf("Escolha o segundo atributo de comparação:\n");
        printf("[1] População:\n");
        printf("[2] Área(km2):\n");
        printf("[4] Pontos turísticos:\n");
        printf("[5] Densidade Populacional:\n");
        printf("[6] PIB per capita:\n");
        printf("[7] Super Poder:\n");
        printf("[8] Não comparar(encerrar o jogo):\n");
        scanf("%d", &escolha2);
    break;

    case 4:
        printf("\n** Compare Novamente **\n");
        printf("Escolha o segundo atributo de comparação:\n");
        printf("[1] População:\n");
        printf("[2] Área(km2):\n");
        printf("[3] PIB:\n");
        printf("[5] Densidade Populacional:\n");
        printf("[6] PIB per capita:\n");
        printf("[7] Super Poder:\n");
        printf("[8] Não comparar(encerrar o jogo):\n");
        scanf("%d", &escolha2);
    break;

    case 5:
        printf("\n** Compare Novamente **\n");
        printf("Escolha o segundo atributo de comparação:\n");
        printf("[1] População:\n");
        printf("[2] Área(km2):\n");
        printf("[3] PIB:\n");
        printf("[4] Pontos turísticos:\n");
        printf("[6] PIB per capita:\n");
        printf("[7] Super Poder:\n");
        printf("[8] Não comparar(encerrar o jogo):\n");
        scanf("%d", &escolha2);
    break;

    case 6:
        printf("\n** Compare Novamente **\n");
        printf("Escolha o segundo atributo de comparação:\n");
        printf("[1] População:\n");
        printf("[2] Área(km2):\n");
        printf("[3] PIB:\n");
        printf("[4] Pontos turísticos:\n");
        printf("[5] Densidade Populacional:\n");
        printf("[7] Super Poder:\n");
        printf("[8] Não comparar(encerrar o jogo):\n");
        scanf("%d", &escolha2);
    break;

    case 7:
        printf("\n** Compare Novamente **\n");
        printf("Escolha o segundo atributo de comparação:\n");
        printf("[1] População:\n");
        printf("[2] Área(km2):\n");
        printf("[3] PIB:\n");
        printf("[4] Pontos turísticos:\n");
        printf("[5] Densidade Populacional:\n");
        printf("[6] PIB per capita:\n");
        printf("[8] Não comparar(encerrar o jogo):\n");
        scanf("%d", &escolha2);
    break;

    case 8:
        printf("Saindo do jogo...\n");
    break;

    default:
        printf("Opção Inválida!!!\n");
    break;
}

if (escolha1 == escolha2){
    printf("Não pode escolher os mesmos atributos!!!\n");
    return 1;
}

//Declaração de variaveis para guardar os valores dos atributos escolhidos.

float soma1, soma2, valor1B, valor2B, valor1A, valor2A, densidade1 = 0, densidade2 = 0;

 switch (escolha1){
    case 1: valor1A = populacao1; valor2A = populacao2; break;
    case 2: valor1A = area_km1; valor2A = area_km2; break;
    case 3: valor1A = pib1; valor2A = pib2; break;
    case 4: valor1A = pontos_turisticos1; valor2A = pontos_turisticos2; break;
    case 5: valor1A = dens_pop1; valor2A = dens_pop2; densidade1 = 1; break;
    case 6: valor1A = pibpcapita1; valor2A = pibpcapita2; break;
    case 7: valor1A = superpoder1; valor2A = superpoder2; break;
    default: printf("\nOpção inválida!\n"); return 1;
}
 switch (escolha2){
    case 1: valor1B = populacao1; valor2B = populacao2; break;
    case 2: valor1B = area_km1; valor2B = area_km2; break;
    case 3: valor1B = pib1; valor2B = pib2; break;
    case 4: valor1B = pontos_turisticos1; valor2B = pontos_turisticos2; break;
    case 5: valor1B = dens_pop1; valor2B = dens_pop2; densidade2 = 1; break;
    case 6: valor1B = pibpcapita1; valor2B = pibpcapita2; break;
    case 7: valor1B = superpoder1; valor2B = superpoder2; break;
    default: printf("\nOpção inválida!\n"); return 1;
}

//inversão da densidade populacional e a soma
soma1 = (densidade1 ? -valor1A : valor1A) + (densidade2 ? -valor1B : valor1B);
soma2 = (densidade1 ? -valor2A : valor2A) + (densidade2 ? -valor2B : valor2B);

printf("Carta 1: %.2f + %.2f = %.2f\n", valor1A, valor1B ,soma1);
printf("Carta 2: %.2f + %.2f = %.2f\n", valor2A, valor2B ,soma2);

if (soma1 == soma2){
    printf("Empate!!!\n");
}
else{
    (soma1 > soma2)? printf("A carta 1 ganhou\n") : printf("A carta 2 ganhou\n");
}


 
}







