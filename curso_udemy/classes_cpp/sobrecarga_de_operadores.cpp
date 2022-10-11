#include <iostream>
#include <stdio.h>

using std::cout;
using std::endl;
using std::cin;
// Sobrecarga de normais e unários
class Vetor{

    int size;
    int *vet;

    public:

        Vetor(): size(0), vet((int*) malloc(sizeof(int) * 1000)) {}; 
        ~Vetor(){ free(vet);}; 

        int get_size() {return this->size;};
        void set_size(int size) {
            if ((size > 0) && size <= this->get_size()){
                this->size = size;
            }
        }

        int get_elem(int ind){ return this->vet[ind];};

        void set_elem(int v) { 
            this->vet[size] = v;
            this->size++; 
            }

        void show(){
            for(int i = 0; i < this->get_size(); i++){
                cout << get_elem(i) << ", ";
            }
            cout << endl;
        }


        Vetor* operator + ( Vetor *V2){
            Vetor *V3 = new Vetor();

            for (int i = 0; i < this->get_size(); i++){
                V3->set_elem(this->get_elem(i));
            }

            for (int i = 0; i < V2->get_size(); i++){
                V3->set_elem(V2->get_elem(i));
            }

            return V3;
        }

        Vetor* operator -(){
            Vetor *Out = new Vetor();
            for (int i = 0; i < this->size; i++){
                Out->set_elem(get_elem(i) * - 1);
            }

            return Out;
        }

};




int main(){
    
    Vetor *A = new Vetor();
    Vetor *B = new Vetor();

    for (int i = 0; i < 10; i ++){
        A->set_elem(i);
    }

    A->show();

    for (int i = 10; i < 20; i++){
        B->set_elem(i);
    }
    B->show();

    Vetor *C = - *A;

    C->show();
    A->show();

    A->show();
    A++;

    delete C;
    delete A;
    delete B;


}