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


int main(){

   aluno x;  // construtor sem parâmetro
   aluno y("Henrique", 20);
    
    cout << "Sem parâmetro:" << endl;
    cout << x.nome << endl;

    cout << x.idade << endl << endl;

    cout << "Com parâmetro:" << endl;

    cout << y.nome << endl;

    cout << y.idade << endl << endl;


    
    return 0;
}
