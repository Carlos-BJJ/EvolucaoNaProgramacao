#include <stdio.h>

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite a sua idade: ");
        scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite sua altura: ");
        scanf("%f", &altura);
    printf("A sua altura é: %.2f\n", altura);

    printf("Digite seu nome:");
        scanf("%s",nome);
    printf("Seu Nome é %s\n", nome);
    
    printf("Digite sua opção: ");
        scanf(" %c", &opcao);
    printf("Sua opção é %c\n", opcao);

/*  Um espaço no scanf é lido com uma finalição,
        logo colocando um nome composto só aparecerá o primeiro nome
        não imprimirá nada além do espaço.
*/
}
