#include <stdio.h>

int main(){
float n1, n2 ,n3, media;

printf("------------------------------\n");
printf("Programa De Calculo De Média\n");
printf("------------------------------\n");

printf("Digite a Nota da Prova 1: ");
scanf("%f", &n1);

printf("Digite a Nota da Prova 2: ");
scanf("%f", &n2);

printf("Digite a Nota da Prova 3: ");
scanf("%f", &n3);

media = (n1 + n2 + n3) / 3;

printf("A média do Aluno foi: %.2f", media);

}