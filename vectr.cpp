#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numbers; // numbers é o nome do vector

    int tam;

    for (int i = 0; i< 10; i++){

        numbers.push_back(i * 5);
    }
    
    cout << "Tamanho do Vector:     " <<numbers.size() << endl;

    cout << "Elementos do Vector:   [";

    for (int j = 0; j < numbers.size(); j++){

        cout << "   " << numbers[j];
    }

    cout << "   ]" << endl;
    
    return 0;

}
