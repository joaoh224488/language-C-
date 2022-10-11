#include <iostream>
using std::cout;
using std:: endl;


// Herança múltipla é fazer uma classe herdar de várias superclasses;

class Base1{
    public:
        int x;

        Base1(int n): x(n){};
};

class Base2 {
    public:
        int y;

        Base2(int n): y(n){}; 
};

class Derivada : public Base1, public Base2{
    public:
        int z;

        Derivada(int a, int b, int c) : Base1(a), Base2(b), z(c){};
};

int main(){

    Derivada *A = new Derivada(2, 3, 4);

    std::cout << A->x << ", " << A->y << ", " << A->z << endl;

    return 0;
}
