#include <stdio.h>

int main(){

//Tabuleiro iniciado 
int tabuleiro[10][10] = {0};

//Definindo os navios
int NavioHorizontal [3] = {3, 3, 3}, NavioVertical [3] = {3, 3, 3};

//Definindo as coordenadas
int linhaH = 2, colunaH = 1; // Navio Horizontal
int linhaV = 5, colunaV = 7; // Navio Vertical

for(int i = 0; i < 3; i++){
    tabuleiro[linhaH][colunaH + i] = NavioHorizontal[i];
} 
/*
Eu somo a coluna com i, pois eu quero que os valores estejam
um do lado do outro
*/

for(int i = 0; i < 3; i++){
    tabuleiro[linhaV + i][colunaV] = NavioVertical[i];
}
/*
Eu somo a linha com i, pois eu quero que os valores estejam
um embaixo do outro
*/

printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        printf("%d ", tabuleiro[i][j]);
}
    printf("\n");
}



} 