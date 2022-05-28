#include <iostream>
#include "Aviao.h"

using namespace std;


int main(){

    Aviao *av1 = new Aviao(1); // Informando o tipo já na declaração
    Aviao *av2 = new Aviao(2);
    Aviao *av3 = new Aviao(3);

    cout << endl;

    av1->vel = 100;
    av2->vel = 200;
    av3->vel = 150;


    av1->imprimir();
    av2->imprimir();
    av3->imprimir();



}