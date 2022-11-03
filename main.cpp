#include <iostream>
#include "Racionais.h"

using namespace std;

int main(){
    Racionais racional(1, 2);
    Racionais racional2(1, 3);
    -racional;

    racional = ++racional;
    racional = racional++;
    racional = --racional;
    racional = racional--;

    racional + racional2;
    racional - racional2;
    racional * racional2;
    racional / racional2;
    
}