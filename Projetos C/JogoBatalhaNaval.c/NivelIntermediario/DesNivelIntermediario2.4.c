#include <stdio.h>

#define Linhas 10
#define Colunas 10

int main(){

//Tabuleiro iniciado 
int tabuleiro[Linhas][Colunas] = {0};


//Definindo os navios
int NavioHorizontal [3] = {3, 3, 3}, NavioVertical [3] = {3, 3, 3};
int NavioDiagonal1 [3] = {3, 3, 3}, NavioDiagonal2 [3] = {3, 3, 3};

//Definindo as coordenadas
int linhaH = 2, colunaH = 1; // Navio Horizontal
int linhaV = 5, colunaV = 7; // Navio Vertical
int LinhaD1 = 4, ColunaD1 = 1; //Navio diagonal
int LinhaD2 = 0, ColunaD2 = 6; //Navio diagonal


for(int i = 0; i < 3; i++){
    tabuleiro[LinhaD1 + i][ColunaD1 + i] = NavioDiagonal1[i];
} 

for(int i = 0; i < 3; i++){
    tabuleiro[LinhaD2 + i][ColunaD2 + i] = NavioDiagonal2[i];
}
/* Eu somo a coluna e linha com i, pois eu quero que os valores estejam
em diagonal */

for(int i = 0; i < 3; i++){
    tabuleiro[linhaH][colunaH + i] = NavioHorizontal[i];
} 
/* Eu somo a coluna com i, pois eu quero que os valores estejam
um do lado do outro*/

for(int i = 0; i < 3; i++){
    tabuleiro[linhaV + i][colunaV] = NavioVertical[i];
}
/*
Eu somo a linha com i, pois eu quero que os valores estejam
um embaixo do outro
*/

printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
for (int i = 0; i < Linhas; i++){
    for (int j = 0; j < Colunas; j++){
        printf("%d ", tabuleiro[i][j]);
}
    printf("\n");
}



} 