#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numbers;
    vector<char> st;

    int i;

    for (i = 0; i < 5; i++){
        numbers.push_back(i * 3);
    }

    for (i = 'a'; i < 'f'; i++){

        st.push_back(i);
    }
    cout << "Vetor de chars:    ";
    for (i = 0; i < st.size(); i++){

        cout << "   " <<st[i];
    }
    cout << endl;

    cout << "Vetor de números:  ";

    for (i = 0; i < numbers.size(); i++){
        cout << "   "<< numbers[i];
    }
    cout << endl;
    return 0;
}