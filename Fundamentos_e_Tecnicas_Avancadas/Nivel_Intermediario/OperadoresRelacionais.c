#include <stdio.h>

int main(){
/* 
> (maior que)
< (menor que)
>= (maior ou igual a)
<= (menor ou igual a)
== (igual a)
!= (diferente de)

Os operadores relacionais retornam valores em booleano 
(1 para verdadeiro e 0 para falso)*/

printf("\nComparação Simples\n");

int a = 10;
int b = 20;

printf("a > b: %d\n", a > b);
printf("a < b: %d\n", a < b);
printf("a == b: %d\n", a == b);
printf("a != b: %d\n", a != b);

printf("------------------------------------\n");

printf("\nComparação com Tipos de Dados diferentes\n");

int x = 10;
int y = 10.0;
char c = 'a';
/*
A variavel char não armazena o caractere 'a', mas sim
o valor de 'a' na tabela ASCCI
*/

printf("x == y: %d\n", x == y);
printf("x != y: %d\n", x != y);
//Acontece um conversão implícita!

printf("x >= c: %d\n", x >= c);
printf("O valor ASCII de '%c' é: %d\n", c, c);



printf("------------------------------------\n");

printf("\nComparação com Tipos de Dados diferentes com conversão explícita(casting)\n");

int num = 10;
float result = 10.2;

printf("num <= result: %d\n", num <= result);
printf("num == result: %d\n", num == (int)result);
printf("num != result: %d\n", num != result);
}