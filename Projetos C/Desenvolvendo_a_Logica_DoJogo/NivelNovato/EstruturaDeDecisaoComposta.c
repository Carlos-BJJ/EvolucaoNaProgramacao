#include <stdio.h>

int main(){

int est;    

printf("Digite a quantidade de produtos no estoque: ");
scanf("%d", &est);


if (est < 5){
    printf("O estoque está baixo!");
}   else{
    printf("O estoque está nos conformes!");
}

return 0;
}