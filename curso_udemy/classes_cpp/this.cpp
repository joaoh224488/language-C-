/*
O ponteiro this é um ponteiro que é inicializado junto 
com a posição de memória do próprio objeto

Ele aponta para a posição de memória do próprio objeto

O ponteiro é oculto, e só pode ser acessado dentro do escopo da classe


1° caso de uso para o ponteiro this:

Um atributo da classe ter o mesmo nome de um dos parâmetros
de uma função. (EXEMPLO ABAIXO ALTERANDO A CLASSE ANTERIOR)

2° caso de uso do ponteiro this:

Retornar o ponteiro do objeto. 
Pode ser usado como uma espécie de recusrividade.
(FUNÇÃO AUMENTAR IDADE ABAIXO)

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

    aluno(char nome[50], int idade);
    aluno();
    char* get_nome();
    int get_idade();

    void set_nome(char nome[50]);
    void set_idade(int idade);

    aluno * idade_plus1_position();

};

 aluno:: aluno(char nome[50], int idade)
{
    {
        strcpy(this->nome, nome);
        this->idade = idade;
    }
}

aluno :: aluno ()
    {
        strcpy(this->nome, "");
        this->idade = 0;
     }

int aluno :: get_idade(){
    return idade;
}

char* aluno :: get_nome(){
    return nome;
}

void aluno :: set_idade(int idade){
    if (idade >= 0){
        this->idade = idade;
     }
    else{
        printf("Idade negativa.\n");
     }
}

void aluno :: set_nome(char nome[50]){
    strcpy(this->nome, nome);
}

aluno * aluno :: idade_plus1_position(){
    idade++;
    return this;
}

int main(){

 aluno x;  // construtor sem parâmetro
   aluno y("Henrique", 20);
    
    cout << "Idade:" << endl;
    cout << x.get_idade() << endl;
    cout << y.get_idade() << endl << endl;
    


    cout << "Nomes:" << endl;

    cout << x.get_nome() << endl;

    cout << y.get_nome() << endl << endl;

    cout << "Idade:" << endl;

    x.set_idade(4);
    y.set_idade(50);

    cout << x.get_idade() << endl;
    cout << y.get_idade() << endl << endl;

    x.set_nome("Joao");
    
    cout << x.get_nome() << endl;

    // TESTE DA CADEIA DE CHAMADAS AQUI:

    aluno *pos = x.idade_plus1_position()->idade_plus1_position()->idade_plus1_position();

    cout << x.get_idade() << endl;

    return 0;
}
