#include <stdio.h>

int main(){

int num;

do{
    printf("Digite um número par para sair do código: ");
    scanf("%d", &num);

    if (num % 2 == 0){
       printf("O número %d é par\n",num);
    }else{
        printf("O número %d é ímpar\n",num);   
    }
    
} while (num % 2 != 0);

printf("Você digitou um número par, encerrando o código...");

}