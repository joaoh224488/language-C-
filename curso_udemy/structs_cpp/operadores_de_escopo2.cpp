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

    void falar_nome();

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

void aluno :: falar_nome(){
    cout << "Meu nome é " << nome << "!\n";
}

int main (){
    
    int q_alunos = 1;

    turma pe = turma(q_alunos);

    pe.p[0] = aluno("Henrique", 20); 

    pe.p[0].falar_nome();



    return 0;
}
