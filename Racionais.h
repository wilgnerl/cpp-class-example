#ifndef CLASS_Q
#define CLASS_Q

#include <ostream>

using namespace std;

class Racionais{
    friend ostream &operator<<(ostream &os, const Racionais &rhs);
    private:
        int MDC();
    public:
        int numerador;
        int denominador;
        // Construtor
        Racionais();
        Racionais(int numerador);
        Racionais(int numerador, int denominador);

        // Destrutor
        ~Racionais();

        // Operator Unarios
        Racionais operator-();
        Racionais operator++();
        Racionais operator++(int);
        Racionais operator--();
        Racionais operator--(int);

        //Operadores Binarios
        Racionais operator+(const Racionais &rhs);
        Racionais operator-(const Racionais &rhs);
        Racionais operator*(const Racionais &rhs);
        Racionais operator/(const Racionais &rhs);
        
};


#endif