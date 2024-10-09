#include "Lista.hpp"
#include <iostream>

int main(){

    Lista mi_lista;
    mi_lista.insercion(2);
    mi_lista.insercion(3);
    mi_lista.insercion(8);
    mi_lista.insercion(100);

    mi_lista.mostrar_lista();

    std:: cout << "Lista eliminando posicion" << std:: endl;
    mi_lista.eliminar(3);
    mi_lista.insercion(101,3);
    mi_lista.mostrar_lista();


    return 0;
}
