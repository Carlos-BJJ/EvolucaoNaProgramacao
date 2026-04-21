#include <stdio.h>

int main(){

int mv_comp = 1, mv_reto, num, esc, esc2;

char andar[5];
//Quantas vezes o cavalo andará

printf("Digite quantas vezes você quer andar com o cavalo ♞ ♘: ");
scanf("%d", &num);

do{
//Escolha da direção que o cavalo vai andar 2 casas
    printf("\nDigite a sua escolha:\n ");
    printf("[1] andar pra cima\n");
    printf(" [2] andar pra baixo\n");
    printf(" [3] andar pra direita\n");
    printf(" [4] andar pra esquerda\n");
    scanf("%d", &esc);

    switch (esc){
    case 1:
        for(mv_reto = 1; mv_reto <= 2; mv_reto++ ){
            printf("\nCima\n");
        }
    break;

    case 2:
        for(mv_reto = 1; mv_reto <= 2; mv_reto++ ){
            printf("\nBaixo\n ");
        }
    break;

    case 3:
        for(mv_reto = 1; mv_reto <= 2; mv_reto++ ){
            printf("\nDireita\n ");
        }
    break;

    case 4:
        for(mv_reto = 1; mv_reto <= 2; mv_reto++ ){
            printf("\nEsquerda\n ");
        }
    break;

    default:
        printf("Opção não disponível\n");
    break;
    }

//Escolha da direção que o cavalo vai andar 1 casa

if (esc == 1 || esc == 2){
    printf("\nDigite a sua escolha:\n ");
    printf("[1] Andar para direita\n");
    printf(" [2] Andar para esquerda\n");
    scanf("%d", &esc2);
   switch (esc2){
   case 1:
        printf(" \nDireita\n");
   break;

   case 2:
        printf(" \nEsquerda\n");
   break;
   
   default:
        printf("Opção não disponível\n");
   break;

   }
}

if (esc == 3 || esc == 4){
    printf("\nDigite a sua escolha:\n ");
    printf("[1] Andar para cima\n");
    printf(" [2] Andar para baixo\n");
    scanf("%d", &esc2);
   switch (esc2){
   case 1:
        printf(" \nCima\n");
   break;

   case 2:
        printf(" \nBaixo\n");
   break;
   
   default:
        printf("Opção não disponível\n");
   break;

   }
}


    mv_comp++;

}while (mv_comp <= num);

}