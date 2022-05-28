#ifndef CLASSES_H
#define CLASSES_H

#include <string>

class Veiculo
{
private:

    std::string nome;
    int vel;
    bool ligado;

public:

    int velMax;
    int tipo;
    Veiculo(int tp);
};

Veiculo::Veiculo(int tp)
{   tipo = tp;

    if (tp == 1){
        nome = "Carro";
        velMax = 200;
    }
    else if (tp == 2){
        nome = "Aviao";
        velMax = 800;
    }
    else if (tp == 3)
    {
        nome = "Navio";
        velMax = 120;
    }
    
}




#endif