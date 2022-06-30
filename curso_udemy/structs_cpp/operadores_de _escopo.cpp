/* o operador :: em C++ é conhecido como operador de resolução de escopo
trata-se de um operador que permite acessar um escopo fora do que está sendo trabalhado

<escopo> :: <membro>

::<membro> acessa o escopo global
*/
#include <iostream>

using namespace std;

int x = 1; // exemplo básico



int main(){

    int x = 45;

    cout << "\nNo escopo da main, x é "<< x <<"\nNo escopo global, x é " << ::x << endl;

    return 0;
}