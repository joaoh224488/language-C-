#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno
{
    char nome[50];
    int idade;
}aluno;


int main(){

    aluno aluno1;

    char no[40] = "Henrique";

    strcpy((&aluno1)->nome, no);

    (&aluno1)->idade = 20;

    printf("Nome:   %s\n", aluno1.nome);
    printf("Aluno:  %d\n", aluno1.idade);
    

    return 0;
}