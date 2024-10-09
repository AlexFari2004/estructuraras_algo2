#include "Cola.hpp"
#include <iostream>

int main(){
    Cola mi_cola;
    mi_cola.alta(5);
    mi_cola.alta(8);
    mi_cola.alta(9);
    mi_cola.alta(100);
    std:: cout << "Primer elemento: " << mi_cola.consulta() << std:: endl;
    mi_cola.baja();
    mi_cola.mostrar_cola();
}