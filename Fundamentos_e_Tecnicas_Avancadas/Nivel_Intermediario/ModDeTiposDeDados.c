#include <stdio.h>

int main(){
/*TIPO UNSIGNED*/
printf("\nModificador UNSIGNED\n");

// Valor que excede o limite do signedint(intnormal)
int numerosinal = 3000000000;

unsigned int numerosemsinal = 3000000000;

printf("Numero com sinal: %d\n", numerosinal); //ocorreu um overflow
printf("Numero sem sinal: %u\n", numerosemsinal);

printf("---------------------------------------\n");

/*TIPO LONG*/
printf("\nModificador LONG\n");

//Valor maximo de int
int numeroNormal = 2147483647;
long long int numeroGrande = 2147483647;

printf("Número Normal(int): %d\n", numeroNormal);
printf("Número Grande(long int): %lld\n", numeroGrande);

numeroGrande = 2147483648; //Ultrapassou o valor máximo de int
printf("Número Grande Atualizado(long int): %lld\n", numeroGrande);

double preciseNumber = 3.141592653589793;
long double veryPreciseNumber = 3.14159265358979323846;
/*Não funciona direito no windows*/ 
 
printf("\nNúmero preciso (double): %.15f\n", preciseNumber);
printf("Número muito preciso (long double): %.21llf\n", veryPreciseNumber);

printf("---------------------------------------\n");

/*Unsigned e long int juntos*/
printf("\nModificador UNSIGNED LONG\n");

unsigned long int numeroGrandePositivo = 4000000000;
printf("Número positivo grande: %lu\n", numeroGrandePositivo);

printf("---------------------------------------\n");

printf("\nModificador SHORT\n");

short int numeroPequeno = 32767; //Número maximo de short int
printf("Número Pequeno: %d\n", numeroPequeno);

numeroPequeno = 32768; //valor maior que o número maximo de short int
printf("Número Pequeno Atualizado: %d\n", numeroPequeno);

}