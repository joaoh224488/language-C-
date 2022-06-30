#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
    char nome[50];
    int idade;

    static int tipo; /* Tipo é um membro estático da struct, isto é, cada instância terá um nome e idade 
                        individuais, mas terão acesso ao mesmo tipo
                        */

    aluno(char n[50], int age){
    strcpy(nome, n);
    idade = age;
    }
    
    aluno(){
        strcpy(nome, "");
        idade = 0;
    }

};

// Atributos ou métodos estáticos devem ser declarados fora do escopo da classe ou struct

int aluno :: tipo = -45;

/* 
Quando uma característica comum deve ser compartilhada entre as instâncias, criamos atributos estáticos;
Quando um método não depende de características da instância, criamos métodos estáticos.
MÉTODOS ESTÁTICOS NÃO ACESSAM OUTROS MEMBROS DA STRUCT
*/

int main(){


    aluno a("Henrique", 20) , b("Joao", 19);

    cout << "Tipo de A: " << a.tipo << endl;
    cout << "Tipo de B: " << b.tipo << endl;

    // Ao atribuir um novo valor para o tipo em uma struct, todas serão alteradas

    a.tipo = 1;

    cout << "Tipo de A: " << a.tipo << endl;
    cout << "Tipo de B: " << b.tipo << endl;   


    return 0;
}