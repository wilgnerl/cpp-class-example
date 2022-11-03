#include "Racionais.h"
#include <ostream>
#include <iostream>

using namespace std;

ostream &operator<<(ostream &os, const Racionais &rhs){
    os << "Valor do denominador: " << rhs.denominador << endl;
    return os;
}

Racionais::Racionais(){
    this->numerador = 0;
    this->denominador = 1;
}

Racionais::Racionais(int numerador){
    this->numerador = numerador;
    this->denominador = 1;
}

Racionais::Racionais(int numerador, int denominador){
    this->numerador = numerador;
    if(denominador < 0){
        cout << "Denominador deve ser maior que zero" << endl;
    } else{
        this->denominador=denominador; }
}

Racionais::~Racionais(){
    cout << "Objeto foi deletado" << endl;
}

Racionais Racionais::operator-(){
    cout << "Negação do numerador: " << -numerador << endl;
    return Racionais(-numerador, denominador);
}

Racionais Racionais::operator++(){
    cout << "Novo numerador: " << (1 * denominador) + numerador << endl;
    cout << "Denominador: " << (1 * denominador) << endl;

    return Racionais((1 * denominador) + numerador, (1*denominador)); 
}

Racionais Racionais::operator++(int){
    cout << "Novo numerador: " << (1 * denominador) + numerador << endl;
    cout << "Denominador: " << (1 * denominador) << endl;

    return Racionais((1 * denominador) + numerador, (1*denominador)); 
}

Racionais Racionais::operator--(){
    cout << "Novo numerador: " << numerador - (1 * denominador) << endl;
    cout << "Denominador: " << (1 * denominador) << endl;

    return Racionais(numerador - (1 * denominador), (1*denominador)); 
}

Racionais Racionais::operator--(int){
    cout << "Novo numerador: " << numerador - (1 * denominador)<< endl;
    cout << "Denominador: " << (1 * denominador) << endl;

    return Racionais(numerador - (1 * denominador), (1*denominador)); 
}

Racionais Racionais::operator+(const Racionais &rhs){
    cout << "Novo numerador: " << (this->numerador * rhs.denominador) + (this->denominador * rhs.numerador) << endl;
    cout << "Novo denominador: " << (this->denominador *  rhs.denominador) << endl;

    return Racionais((this->numerador * rhs.denominador) + (this->denominador * rhs.numerador), (this->denominador *  rhs.denominador));
}

Racionais Racionais::operator-(const Racionais &rhs){
    cout << "Novo numerador: " << (this->numerador * rhs.denominador) - (this->denominador * rhs.numerador) << endl;
    cout << "Novo denominador: " << (this->denominador *  rhs.denominador) << endl;

    return Racionais((this->numerador * rhs.denominador) - (this->denominador * rhs.numerador), (this->denominador *  rhs.denominador));

}

Racionais Racionais::operator*(const Racionais &rhs){
    cout << "Novo numerador: " << (this->numerador) * (rhs.numerador) << endl;
    cout << "Novo denominador: " << (this->denominador *  rhs.denominador) << endl;

    return Racionais( (this->numerador) * (rhs.numerador), (this->denominador *  rhs.denominador));

}

Racionais Racionais::operator/(const Racionais &rhs){
    cout << "Novo numerador: " << (this->numerador) * (rhs.denominador) << endl;
    cout << "Novo denominador: " << (this->denominador *  rhs.numerador) << endl;

    return Racionais( (this->numerador) * (rhs.denominador), (this->denominador *  rhs.numerador));

}
