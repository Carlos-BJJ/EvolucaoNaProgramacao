#include <stdio.h>

int main(){

int opcao;
float nota1, nota2, media;

printf("Menu de Gerenciamento de Estudantes\n");
printf("[1] Calcular Média\n");
printf("[2] Determinar status\n");
printf("[3] Sair\n");
printf("Escolha uma opção\n");
scanf("%d", &opcao);

switch (opcao){
    case 1:
        printf("Digite a primeira nota (de 0 a 10): ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota (de 0 a 10):");
        scanf("%f", &nota2);
        
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2; 
            printf("A média é: %f\n", media);
        } else{
            printf("Opção inválida\n");
        }
        
    break;

    case 2:
        printf("Digite sua média: ");
        scanf("%f", &media);
        if (media >= 7.0){
            printf("Aprovado!");  
        }
        else if (media < 7.0 && media >= 5.0){
            printf("Recuperação!");
        }
        else{
            printf("Reprovado!");
        }
    break;

    case 3:
        printf("Saindo do programa...");    
    break;

    default:
        printf("Opção Inválida!");
    break;
}


}