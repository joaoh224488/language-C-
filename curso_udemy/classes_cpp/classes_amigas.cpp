/*
Se classe A é amiga da classe B, a classe A poderá acessar elementos de B

OBS: A friend não é transitiva. A pode acessar B, mas não pode acessar A

OBS II: USAR FRIEND É MÁ PRÁTICA DE PROGRAMAÇÃO, EXCETO EM CASOS ESPECÍFICOS.
*/

#include <iostream>
#include <string.h>

using namespace std;

class  aluno
{
private:
    char nome[50];
    int idade;
public:

    aluno(char nm[50], int age);
    aluno();
    char* get_nome();
    int get_idade();

    void set_nome(char nm[50]);
    void set_idade(int age);

    friend struct turma;

};

 aluno:: aluno(char nm[50], int age)
{
    {
        strcpy(nome, nm);
        idade = age;
    }
}

aluno :: aluno ()
    {
        strcpy(nome, "");
        idade = 0;
     }

int aluno :: get_idade(){
    return idade;
}

char* aluno :: get_nome(){
    return nome;
}

void aluno :: set_idade(int age){
    if (idade >= 0){
        idade = age;
     }
    else{
        printf("Idade negativa.\n");
     }
}

void aluno :: set_nome(char nm[50]){
    strcpy(nome, nm);
}

//-----------------------------------------------------------------------------------------------------------

struct turma
{
    aluno* p;

    turma(int q_alunos);

    ~turma();

    void dados_aluno(int n_aluno);

};

turma :: turma(int q_alunos){
        p = (aluno *) malloc(sizeof(aluno) * q_alunos);
    }

turma :: ~turma(){
        free(p);
        cout << endl << "Destruído" << endl; 
    }

void turma :: dados_aluno(int n_aluno){

    cout << "Dados do " << n_aluno + 1 <<"° aluno  da struct:" << endl;

    cout << "Nome:  " << p[n_aluno].nome << endl;
    cout << "Idade:  " << p[n_aluno].idade << endl << endl;
}


int main (){
    int q_alunos = 3;

    turma pe = turma(q_alunos);

    pe.p[0] = aluno("Henrique", 20); 
    pe.p[1] = aluno("Igor", 28);
    pe.p[2] = aluno("Joao", 18);
    
     for (int i = 0; i < q_alunos; i++){

        pe.dados_aluno(i);
     }
    
    return 0;
}
