
/* Sobre structs em C++


Para declarar uma variável, não é necessário usar a palavra "struct";
Permite o uso de Métodos;
Permite a Herança;
Permite mais tipos de polimorfismos.
*/
#include <iostream>
#include <string.h>
using namespace std;

struct aluno
{
    char nome[50];
    int idade;
};

aluno* criar_lista(int q_alunos){
    aluno *lista_alunos;
    lista_alunos = (aluno *) malloc(sizeof(aluno) * q_alunos);

    return lista_alunos;

}

int main(){
    int q_alunos;

    cout << "Digite a quantidade de alunos:     " << endl;
    scanf("%d", &q_alunos); 

    aluno *lista_alunos = criar_lista(q_alunos);

    for (int i = 0; i < q_alunos; i ++){
        cout << "Digite o nome do " << i + 1 << "° aluno: " << endl;
        scanf("%s", (lista_alunos + i)->nome);
        cout << "Digite a idade do " << i + 1 << "° aluno: " << endl;
        scanf("%d", &(lista_alunos + i)->idade);
    }

    int maior = lista_alunos->idade;

    for (int i = 0; i < q_alunos; i++){
        cout << "Nome  do  "<< i + 1 << "° aluno:   " << (lista_alunos + i)->nome << endl;
        cout << "Idade do  "<< i + 1 << "° aluno:   " << (lista_alunos + i)->idade << " anos" << endl << endl;
        // Aproveitando, dentro desse for já vamos calcular o aluno com a maior idade;

        if ((lista_alunos + i)->idade > maior){
            maior = (lista_alunos + i)->idade;
        }
    }

    cout << "Aluno(s) mais velho(s):" << endl << "[";

    for (int i = 0; i < q_alunos; i++){
        if ((lista_alunos + i)->idade == maior){
            cout << (lista_alunos + i)->nome << ", ";
        }
    }
    cout <<"]" << endl;


 

    return 0;
}
