#include <stdio.h>

int main(){
//for = para
int num, soma = 0;

printf("Digite até qual número deseja contar? ");
scanf("%d", &num);

for(int cont = 1; cont <= num; cont++){
    printf("%d ", cont);
    soma = soma + cont;
}
printf("\nA soma dos números até %d é: %d\n ", num, soma);

}