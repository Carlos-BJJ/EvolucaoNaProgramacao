#include <stdio.h>

int main(){

int esc, res;

printf("Você deseja ver a tabuada de qual número? ");
scanf("%d", &esc);

for (int cont = 1; cont <= 10; cont++){
    res = esc * cont;
    printf("%d x %d = %d\n", esc, cont, res);
}

}