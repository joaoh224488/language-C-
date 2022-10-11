// Herança pública
// Membros públicos são passados como públicos;
// Membros privados são permanecem ocultos (só a classe base acessa);
// Membros protected são passados como protected;

// Herança privada
// Todos os membros públicos, privados e protected são herdados como private;
// É necessário criar getters e setters publicos ou protected na superclasse pra conseguir acessar os membros;
// Para retornar um membro, será necessário retornar uma função getter da classe mãe na classe filha;

// Herança protegida
// Membros públicos e protegidos são herdados como protected;
// membros private são herdados como private;
// A ideia é idêntica à ideia da classe private
class A{
    public:
        int publico;
        A(int publico, int privado, int protegido): publico(publico), privado(privado), protegido(protegido){};
    
    private:
        int privado;
    
    protected:
        int protegido;
};

class B{
    
};