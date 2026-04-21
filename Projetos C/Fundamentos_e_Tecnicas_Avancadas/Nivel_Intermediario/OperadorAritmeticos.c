#include <stdio.h>

int main(){
/*
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)
*/

int n1, n2;
int soma, subtracao, multiplicacao, divisao;

printf("Escolha um número: ");
scanf("%d", &n1);

printf("Escolha outro número: ");
scanf("%d", &n2);

soma = n1 + n2;

subtracao = n1 - n2;

multiplicacao = n1 * n2;

divisao = n1 / n2;

printf(" A soma é: %d\n ",soma);
printf("A subtração é : %d\n ", subtracao);
printf("A multiplicação é : %d\n ", multiplicacao);
printf("A divisão é : %d\n ", divisao);

return 0;
}