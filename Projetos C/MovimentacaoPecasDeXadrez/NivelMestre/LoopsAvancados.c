#include <stdio.h>

int main(){
printf("\nMúltiplas variaveis\n");

    for(int i = 0, j = 10; i < j; i++, j--){
        printf("i: %d, j: %d\n", i, j);
    }

printf("\n-------------------------------------------------\n");
printf("Condições Múltiplas\n");


     for(int i = 0, j = 10; i < 5 && j > 5; i++, j--){
        printf("i: %d, j: %d\n", i, j);
    }

printf("\n-------------------------------------------------\n");
printf("Atualizações Complexas\n");

    for(int i = 0; i < 10; i += (i % 2 == 0) ? 1 : 2){
        printf("%d ", i);
    }


    return 0;
}