#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

#include <string>

class Aviao
{
private:
    
public:

    int vel = 0;
    int velmax;
    std::string tipo;
    Aviao(int tp);
    void imprimir();
};

Aviao::Aviao(int tp)
{
    if (tp == 1){
        tipo = "Jato";
        velmax = 800;
    }
    else if (tp == 2){
        tipo = "Monomotor";
        velmax = 350;
    }
    else if (tp == 3){
        tipo = "Planador";
        velmax = 180;
    }
}

void Aviao::imprimir(){

    std::cout << "Tipo:                 " << tipo << std::endl;
    std::cout << "Velocidade Máxima:    " << velmax << std::endl;
    std::cout << "Velocidade atual      " << vel << std::endl;
    std:: cout << std :: endl;
}



#endif