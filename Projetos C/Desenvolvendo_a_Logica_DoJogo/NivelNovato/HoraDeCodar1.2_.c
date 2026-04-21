#include <stdio.h>

int main(){
printf("\n---------------------------------------\n");
printf("  Condição de Segurança de um armazem   \n");
printf("---------------------------------------\n");

float temp, umi;
unsigned int prods;

printf("Qual a temperatura do armazem?(Celsius)");
scanf("%f", &temp);

printf("Qual o nível de umidade do armazem?");
scanf("%f", &umi);

printf("Quantos produtos tem no estoque?");
scanf("%u", &prods);

if(temp >= 30){
    printf("A temperatura está alta\n");
}
else{
    printf("A temperatura está normal\n");
}

if(umi >= 15){
    printf("A umidade está alta\n");
}
else{
    printf("A umidade está normal\n");
}

if(prods <= 500){
    printf("O estoque está vazio\n");
}
else{
    printf("O estoque está normal\n");
}

}