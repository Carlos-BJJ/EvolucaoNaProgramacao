#include <stdio.h>

int main(){

/*
Atribuição Simples (=)
Atribuição com soma (+=)
Atribuição com subtração (-=)
Atribuição com multiplicação (*=)
Atribuição com divisão (/=)
*/

int num1 = 10 , num2, res;

res = 10;
printf("Resultado: %d\n", res);

//res = res + 20
res += 20;
printf("Resultado: %d\n", res);

//res = res - num1
res -= num1;
printf("Resultado: %d\n", res);

//res = res * 5
res *= 5;
printf("Resultado: %d\n", res);

//res= res / 2
res /= 2;
printf("Resultado: %d\n", res);

}