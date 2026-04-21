#include <stdio.h>

int main(){
    //variavel= tipo nome;
    
    /* Regras de variaveis: Não se pode começar com números, 
variaveis são case sensitives (Idade é diferente de idade),
não se pode usar palavras reservadas (int, printf, etc...)
    */
    
    int idade;
    float altura;
    char nome[6]; /*array de char, significa que juntou
varios caracteres formando uma string*/

    /*tipos de dados: Define os valores que o tipo de dado 
pode armazenar
        Primitivos:
            int = n°s inteiros
            float = n°s decimais
            double = n°s decimais de valores maiores
            char = caracteres */ 

/* Inicializar uma variável significa colocar um valor inicial dentro da caixa. 
Isso pode ser feito na mesma linha em que você declara a variável ou depois,
 no meio do seu código.
        Ex.: */

            int idade = 25; //(Foi atribuido um valor para idade) 
            float altura; //(A variavel nn foi inicializada)
            altura = 1.81; //(A variavel foi inicializada posteriomente) 
/*OBS.:
    Para inicializar variáveis do tipo char você precisa 
colocar o caractere entre aspas simples ‘ ‘. */            

}