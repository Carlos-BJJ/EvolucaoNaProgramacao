#include <stdio.h>

int main(){

    int index;

    char * nomeAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite um número do aluno que queria ver as notas: \n");
    printf("[0] Aluno 0\n");
    printf("[1] Aluno 1\n");
    printf("[2] Aluno 2\n");
    scanf("%d", &index);

    printf("A notas do %s são: %s e %s", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2] );    
    


}