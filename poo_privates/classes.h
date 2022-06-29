#ifndef CLASSES_H
#define CLASSES_H

#include <string>

class Veiculo
{
private:
    std::string nome;
    int vel = 0;
    bool ligado;
    void setVelMax(int vm);
    int velMax;
public:
    Veiculo(int tp);
    void imprimir();
    int getVelMax();
    int get_ligado();
    void set_ligado(int l);
};

Veiculo::Veiculo(int tp) // 1 - carro; 2 - Aviao; 3 - Navio
{
    if (tp == 1){
        nome = "Carro";
        setVelMax(200);
    }
    else if (tp == 2){
        nome = "Aviao";
        setVelMax(800);
    }
    else if (tp == 3){
        nome = "Navio";
        setVelMax(120);
    }
    set_ligado(0);
}

void Veiculo :: imprimir(){

    std::cout << std:: endl << "Nome:                      " << nome << std::endl;
    std::cout << "Velocidade Máxima:         " << velMax << std::endl;
    std::cout << "Ligado:                    ";
    if (ligado){
        std:: cout << "True" << std:: endl;
    }
    else{
        std:: cout << "False" << std:: endl;
    }
    std::cout << std::endl;

}

int Veiculo :: getVelMax(){
    return velMax;
}

void Veiculo :: setVelMax(int vm){
    velMax = vm;
}

int Veiculo :: get_ligado(){
    return ligado;
}

void Veiculo :: set_ligado(int l){

    if (l){
        ligado = true;
    }
    else{
        ligado = false;
    }

}


#endif