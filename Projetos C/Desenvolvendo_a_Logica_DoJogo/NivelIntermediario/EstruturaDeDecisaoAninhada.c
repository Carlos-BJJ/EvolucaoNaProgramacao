#include <stdio.h>

int main(){

int idade, dep;
float renda;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite sua renda mensal: ");
scanf("%f", &renda);
printf("Você possui quantos dependentes: ");
scanf("%d", &dep);

if (idade >= 18 && idade <= 65){
    if (renda < 3000){
        if(dep > 2){
            printf("Você está apto ao benefício!");
        }
        else{
            printf("Você não está apto ao benefício devido aos dependentes!");
        }
    }
    else{
        printf("Você não está apto ao benefício devido a renda!");  
    }
} 
else {
    printf("Você não está apto ao benefício devido a idade!");
}

}