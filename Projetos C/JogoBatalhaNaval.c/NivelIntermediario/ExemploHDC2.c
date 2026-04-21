#include <stdio.h>

#define Linhas 3
#define Colunas 3

int main(){

    int matriz[Linhas][Colunas];

    int soma = 0;

//Soma do valor 1 a cade indice de linha e coluna
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            soma++;
            matriz[i][j] = soma;
            printf("%1d ", matriz[i][j]);
    }
    printf("\n");
    }

}