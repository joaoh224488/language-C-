#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numbers, more_numbers;

    int i;

    for (i = 0; i < 5; i++){
        numbers.push_back(i * 3);
    }

    for (i = 5; i < 20; i++){

        more_numbers.push_back(i * 4);
    }

    cout << "Vetor de números:  ";

    for (i = 0; i < numbers.size(); i++){
        cout << "   "<< numbers[i];
    }
    cout << endl;

    cout << "Vetor de outros números:    ";
    for (i = 0; i < more_numbers.size(); i++){

        cout << "   " << more_numbers[i];
    }
    cout << endl;

    more_numbers.swap(numbers); // troca o conteúdo dos vectors de mesmo tipo
    return 0;
}