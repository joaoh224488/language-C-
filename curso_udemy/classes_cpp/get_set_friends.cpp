/* 
Getters e setters são formas de obter e alterar
elementos de um objeto sem tirar a segurança da classe


Função fora do escopo da classe que pode 
usar membros públicos e privados da classe RECEBENDO A CLASSE COMO PARÂMETRO

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

    friend int dobrar_idade(aluno obj);

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

int dobrar_idade(aluno obj){
    return obj.idade *  2;
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

    cout << dobrar_idade(x) << endl;
    



    return 0;
}


