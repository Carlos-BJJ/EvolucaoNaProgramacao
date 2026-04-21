#include <stdio.h>

int main(){

/*
Incremento (++)
Pré-Incremento (++a)
Pós-Incremento (a++)
Decremento (--)
Pré-Decremento (--a)
Pós-Decremento (a--)
*/

int n1 = 1, res;
printf("Antes incremento: %d\n", n1);


/*
Pós-incremento:
res = n1
n1++
*/

res = n1++;
printf("Após Pós-incremento - número 1: %d\n-Resultado: %d\n", n1, res);

/*
Pré-incremento:
n1++
res = n1
*/

res = ++n1;
printf("Após Pré-incremento - número 1: %d\n-Resultado: %d\n", n1, res);


//n1 = n1 - 1
//n1 -= 1
/*n1 --;
printf("Após incremento: %d\n", n1);*/

return 0;

}