#include <stdio.h>

int main(){

int n1, n2;
printf("---------------------------------\n");
printf("      Operador Lógico &&(E)      \n");
printf("---------------------------------\n");
printf("Digite um número 1: ");
scanf("%d", &n1);

printf("Digite um número 2: ");
scanf("%d", &n2);

if (n1 > 0 && n2 > 0){
    printf("Os dois números são positivos!\n");
}
else{
    printf("Um dos números é negativo\n");
}

printf("\n---------------------------------\n");
printf("      Operador Lógico ||(OU)      \n");
printf("---------------------------------\n");

int a, b;

printf("Digite um número 1: ");
scanf("%d", &a);

printf("Digite um número 2: ");
scanf("%d", &b);

if (a > 0 || b > 0) {
    printf("Pelo menos um dos números é positivo\n");
}

printf("\n---------------------------------\n");
printf("      Operador Lógico !(NÃO)      \n");
printf("---------------------------------\n");

int x;

printf("Digite um número 1: ");
scanf("%d", &x);

if (!(x > 0)) {
    printf("X não é um número positivo\n");
}
else{
    printf("X é positivo");
}

}