#include "pila_dinamica.hpp"
#include <iostream>

int main(){

    Pila mi_pila;
    mi_pila.alta(5);
    mi_pila.alta(4);
    mi_pila.alta(6);
    mi_pila.alta(91);

    for (int i = 0; i < 3; i++){
        std:: cout << mi_pila.consulta() << std:: endl;
        mi_pila.baja();
    }
    std:: cout << mi_pila.consulta() << std:: endl;
    
    return 0;
}