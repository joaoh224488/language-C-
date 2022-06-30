#include <iostream>

using namespace std;


struct aluno
{
    char nome[50];

    void falar_nome(){
        cout << "Meu nome é:    " << nome << endl;
    }
};


int main(){

    aluno x = {"Henrique"};


    x.falar_nome();
    
    return 0;
}