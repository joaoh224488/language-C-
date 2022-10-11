#include <iostream>

using std:: cout;
using std:: endl;
using std:: cin;

class Cliente{
    long cpf;
    long tel;

    public:
        Cliente(long cpf, long tel): cpf(cpf), tel(tel){};
        ~Cliente() { cout<< "cliente destruido" << endl;};

        long get_cpf(){return this->cpf;};

        void set_cpf(long cpf) {this->cpf = cpf;};

        long get_tel() {return this->tel;};

        void set_tel(long tel) {this->tel = tel;};

};

class Item{
    long codigo;
    double preco;
    int quantidade;
};

class Venda{
    int quantidadeItens;
    int pagamento;
    public:
        Venda(int quantidadeItens, int pagamento): quantidadeItens(quantidadeItens), pagamento(pagamento){};
        ~Venda() { cout << "venda destruída" << endl};

        int get_quantidadeItens() { return this->quantidadeItens;};
        void set_quantidadeItens(int quantidadeItens) {this->quantidadeItens = quantidadeItens;};

        int get_pagamento() { return this->pagamento;};
        void set_pagamento(int pagamento) {this->pagamento = pagamento};

};