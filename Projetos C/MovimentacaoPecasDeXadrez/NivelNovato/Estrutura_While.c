#include <stdio.h>

int main(){
//while = enquanto

int cont = 1, num, soma = 0;

printf("Digite até que número você deseja contar: ");
scanf("%d", &num);

while(cont <= num){
    printf("%d, ", cont);
    soma = soma + cont;
    cont++; //Incremento
}
printf("A soma de todos os números é: %d", soma);

}