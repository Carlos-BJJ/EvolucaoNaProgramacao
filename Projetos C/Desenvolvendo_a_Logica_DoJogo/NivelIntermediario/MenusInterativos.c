#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int opcao;
int numeroSecreto, palpite;

printf("----------------\n");
printf(" Menu Principal\n ");
printf("----------------\n");
printf("[1] Iniciar Jogo\n");
printf("[2] Ver Regras\n");
printf("[3] Sair!\n");
printf("Escolha uma opção\n");
scanf("%d", &opcao);

switch (opcao){
    case 1:
        //srand é o ponto de partida
        //rand é o número pseudoaleatorio
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número (0 a 9):");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto){
            printf("Você acertou!\n");
            printf("O Num. secreto é: %d", numeroSecreto);
        }
        else{
            printf("Você errou!\n");
            printf("O Num. secreto é: %d", numeroSecreto);
        }
        break;
    case 2:
        printf("As regras são...");
    break;
    case 3:
        printf("Você saiu!");
    break;
    default:
        printf("Opção Inválida");
    break;

}

}