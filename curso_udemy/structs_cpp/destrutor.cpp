/* Para evitar vestígios inconvenientes de Structs ou classes, existem os destrutores
~classe ou ~struct */
#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
    char nome[50];
    int idade;

    aluno(char n[50], int age){
    strcpy(nome, n);
    idade = age;
    }
    aluno(){
        strcpy(nome, "");
        idade = 0;
    }
};

struct turma
{
    aluno* p;

    turma(int q_alunos){
        p = (aluno *) malloc(sizeof(aluno) * q_alunos);
    }

    ~turma(){
        free(p);
        cout << endl << "Destruído" << endl; 
    }

};

int main (){
    
    int q_alunos = 3;

    turma pe = turma(q_alunos);

    pe.p[0] = aluno("Henrique", 20); 

    // Nota interessante: todas as variáveis para as quais o ponteiro aponta estão preenchidas com 
    // o construtor vazio

    for (int i = 0; i < q_alunos; i++){

        cout << pe.p[i].nome << endl;
        cout << pe.p[i].idade << endl;

    }

    return 0;
}
