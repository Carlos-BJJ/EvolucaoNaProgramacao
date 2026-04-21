#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int jogador, cpu;

printf("--------------\n");
printf(" JOGO JOKENPÔ \n");
printf("--------------\n");
printf("Escolha as opções:\n");
printf("[0] Pedra\n");
printf("[1] Papel\n");
printf("[2] Tesoura\n");
printf("[3] Sair do jogo\n");
scanf("%d", &jogador);

/*
Caso a opção seja inválida ou o jogador saia,
o programa é encerrado
*/
if(jogador > 3){
    printf("Opção inválida!");
return 0; 
}
else if (jogador == 3){
    printf("Você saiu do jogo!");
return 0;
}


// Inicializa o gerador de números aleatórios
srand(time(0));
// CPU escolhe 0, 1 ou 2
cpu = rand() % 3;

/*
Como ainda não aprendi vetores e matrizes em C,
farei as opções com estrutura condicional
*/
switch (jogador){
    case 0:
        printf("Você escolheu: Pedra!\n");
    break;

    case 1:
        printf("Você escolheu: Papel!\n");
    break;

    case 2:
        printf("Você escolheu: Tesoura!\n");
    break;
}

switch (cpu){
    case 0:
        printf("A cpu escolheu: Pedra!\n");
    break;

    case 1:
        printf("A cpu escolheu: Papel!\n");
    break;

    case 2:
        printf("A cpu escolheu: Tesoura!\n");
    break;
    default:
        printf("Opção Inválida\n");
    break;
}

printf("\n----------------------------------\n");

if (jogador == cpu){
    printf("\nEmpatou!\n");
}
//somente vitória do jogador
else if ((jogador == 0 && cpu == 2)||
         (jogador == 1 && cpu == 0)||
         (jogador == 2 && cpu == 1))
{
    printf("\nVocê Venceu!\n");
}
// se não é vitóra do jogador, logo será da máquina
else{
    printf("\nVocê Perdeu!\n");
}
}