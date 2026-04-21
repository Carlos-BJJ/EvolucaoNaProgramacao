#include <stdio.h>

int main(){
//do-while = faça enquanto

int cont = 1, soma = 0, num, esc;

printf("Quantos números você quer somar? ");
    scanf("%d", &esc);

do{
    printf("Digite um número: ");
    scanf("%d", &num);

    soma = soma + num;
    cont++;

}while(cont <= esc);

printf("A soma dos números escolhidos foi: %d", soma);

}