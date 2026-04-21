#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite a idade do Aluno: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua Matricula: ");
    scanf("%d", &matricula);

    printf("Nome do Aluno: %s\n - Matricula: %d\n ", nome, matricula);
    printf("- Altura: %.2f\n - Idade: %d anos\n ", altura, idade);

return 0;

}