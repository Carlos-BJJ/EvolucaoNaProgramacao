#include <stdio.h>

int main(){

/*
declarar tipo e quantidade
    int numeros[5];

Inicializar:
    int numeros[5] = {10, 20, 30, 40, 50};  
    
Acesso pelo índice
    numeros[0] == 10; ...
*/

int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores
 
    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento é %d\n", numeros[0]);
    printf("O terceiro elemento é %d\n", numeros[2]);
    printf("O quinto elemento é %d\n", numeros[4]);
 

char *nomes[] = {"Alice", "Bob", "Carol"};

int i;

    for(i = 0; i < 3; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;

}