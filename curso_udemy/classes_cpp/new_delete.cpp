/* 
Para criar um array de objetos ou, simplesmente,
atribuir um objeto ao ponteiro, deve ser usado o comando new ao invés do malloc

Para liberar o espaço dos objetos, deve ser usado o comando delete
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
    ~aluno();
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

aluno :: ~aluno(){
    cout << "Chamou o delete" << endl;
}

//-----------------------------------------------------------------------------------------------------------

int main(){

    int q_alunos = 10;

    aluno *ponteiro_aluno = new aluno("Henrique", 20);

    aluno *turma = new aluno[q_alunos];


    delete (ponteiro_aluno);

    for (int i = 0; i < q_alunos; i++){
        cout << (turma + i)->get_idade() << endl;
    }

    return 0;
}