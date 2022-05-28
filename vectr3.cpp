#include <iostream>
#include <vector>

using namespace std;

void showvector(vector <int> vec);

int main(){

    vector <int> n1;

    n1 = {0, 1, 2, 3, 4, 5, 6};

    // Primeiro elemento do vector

    cout << "Primeiro elemento:    " << n1.front()<< endl;

    // Último elemento:

    cout << "Último elemento:       "<<n1.back() << endl;

    // Elemento qualquer:

    int v = 3;

    cout << "Valor do elemento de índice " << v << ":      "<<n1.at(v) << endl;

    // Inserindo na penúltima posição pelo método insert:

    cout << "Penúltimo valor antes:     " << n1.at(n1.size() - 2) << endl;

    n1.insert(n1.end() - 1, 888); // .end() retorna um iterator Estude sobre isso depois

    cout << "Penúltimo valor depois:     " << n1.at(n1.size() - 2) << endl;

    // Removendo com erase
    cout << "Antes do erase:    " << endl;

    showvector(n1);

    cout << "Depois do erase:   " << endl;

    n1.erase(n1.end() - 2);

    showvector(n1);

    // pop_back retira o último elemento da lista:

    for (int i = n1.size() - 1; i >= 0; i--){
        if (n1[i] % 2 == 0){
            n1.pop_back();
        }
    }
    showvector(n1);


    return 0;
}

void showvector(vector <int> vec){
    for (int i = 0; i < vec.size() - 1; i++){
        cout << vec[i] << " ----> ";
    }
    cout << vec[vec.size() - 1]<< endl;
}