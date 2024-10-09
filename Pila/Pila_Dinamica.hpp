#ifndef PILA_DINAMICA
#define PILA_DINAMICA
#include "Nodo.hpp"

typedef int Dato;

class Pila {

    private:
        Nodo* tope;
    public:

        Pila();

        ~Pila();

        void alta(Dato datos);

        void baja();

        Dato consulta();

        bool esta_vacia();
};


#endif 