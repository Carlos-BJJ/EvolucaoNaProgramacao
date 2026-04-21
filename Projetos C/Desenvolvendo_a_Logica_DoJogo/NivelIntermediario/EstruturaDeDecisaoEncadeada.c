#include <stdio.h>

int main(){

float nota;

printf("Digite sua Nota escolar: ");
scanf("%f", &nota);

if(nota >= 90) {
    printf("Nota A\n");
}
else if (nota >= 80){
    printf("Nota B\n");
} 
else if (nota >= 70){
    printf("Nota C\n");
}
else if(nota >= 60){
    printf("Nota D\n");
}
else if (nota >= 50){
    printf("Nota E\n");
}
else{
    printf("Nota F\n");
}

}