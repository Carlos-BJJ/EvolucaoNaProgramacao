#include <stdio.h>

int main(){

int cont = 0, num, n_par;
printf("Até qual número você deseja ver todos os números pares? ");
scanf("%d", &num);

while (cont <= num){
    if(cont % 2 == 0){
    printf("%d ", cont);
}
    cont++;
}

}