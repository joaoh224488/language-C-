#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED



class Aviao
{
private:
    
public:

    int vel = 0;
    int velMax;
    std:: string tipo;

    Aviao(int tp);

    void imprimir();
    
};
// Método construtor:
Aviao::Aviao(int tp) //  1- Jato; 2 - Monomotor; 3 - Planador
{
    if (tp == 1){
        tipo = "Jato";
        velMax = 800;
    }
    else if (tp == 2){
        tipo = "Monomotor";
        velMax = 350;
    }
    else if (tp == 3) {
        tipo = "Planador";
        velMax = 180;
    }
    else{
        tipo = "ERRO!";
        velMax = -777;
        vel = -888;
    }
}
// Método da classe:
void Aviao::imprimir(){
    std::cout << "Tipo:                      " << tipo << std::endl;
    std::cout << "Velocidade Máxima:         " << velMax << std::endl;
    std::cout << "Velocida atual:             " << vel << std::endl << std::endl;
}


#endif