#include <iostream>

using namespace std;


class Aviao{

    public:
        int vel = 0;
        int velmax;
        string tipo;
        void ini(int tp);

    private:

};


int main(){

    Aviao *av1 = new Aviao();
    Aviao *av2 = new Aviao();

    av1->ini(1);

    av2->ini(2);

    cout << av1->velmax << endl;
    cout << av1->tipo << endl;

    cout << av2->velmax << endl;
    cout << av2->tipo << endl;

    return 0;
}

void Aviao:: ini(int tp){
    if (tp == 1)
    {
       this -> velmax = 800;
       this -> tipo = "Jato";
    }
    else if (tp == 2)
    {
        this -> velmax = 350;
        this -> tipo = "Monomotor";
    }
    else if (tp == 3){
        this -> velmax = 180;
        this -> tipo = "Planador";
    }
    
}