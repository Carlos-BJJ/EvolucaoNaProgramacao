#include <stdio.h>
#include <stdlib.h>
#include <time.h>   

int main(){

int cpu, opcao, num;

srand(time(NULL));
cpu = rand() % 101;

printf("\n***Jogo Da Comparação***\n");
printf("Escolha o operador realacional:\n");
printf("[1] Maior (>)\n");
printf("[2] Menor (<)\n");
printf("[3] Igual (==)\n");
printf("[4] Sair Do Jogo!\n");
scanf("%d", &opcao);

if (opcao == 4){
    printf("Você está saindo do jogo...\n");
    return 0;
}
else if (opcao  > 4 || opcao < 1){
    printf("Opção Inválida...\n");
    return 1;
}


printf("Digite Seu número (de 0 a 100): ");
scanf("%d", &num);

switch (opcao){
    case 1:
        if (num >=0 && num <=100){
        printf("Você escolheu o número: %d\n", num);
        printf("A máquina escolheu o número: %d\n", cpu);
        (num > cpu) ? printf("\nVocê Ganhou!\n") : printf("\nVocê Perdeu!\n");
        }
        else{
            printf("Você escolheu um número fora do especificado\n");
            return 1;
        }
    break;

    case 2:
        if (num >=0 && num <=100){
        printf("Você escolheu o número: %d\n", num);
        printf("A máquina escolheu o número: %d\n", cpu);
        (num < cpu) ? printf("\nVocê Ganhou!\n") : printf("\nVocê Perdeu!\n");
        }
        else{
            printf("Você escolheu um número fora do especificado\n");
            return 1;
        }
    break;

    case 3:
        if (num >=0 && num <=100){
        printf("Você escolheu o número: %d\n", num);
        printf("A máquina escolheu o número: %d\n", cpu);
        (num == cpu) ? printf("\nVocê Ganhou!") : printf("\nVocê Perdeu!\n");
        }
        else{
            printf("Você escolheu um número fora do especificado\n");
            return 1;
        }
    break;

    default:
    break;
}


}