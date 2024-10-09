#ifndef COLA_HPP
#define COLA_HPP

#include "Nodo.hpp"

typedef int Dato;

class Cola {

    private:

        Nodo* nodo;
        int tamanio;

        //Metodo privado
        Nodo* obtener_ultimo_nodo();
    public:
        Cola();
        ~Cola();

        void alta(Dato dato);

        void baja();

        Dato consulta();

        int tamanio_cola();

        bool esta_vacia();

        void mostrar_cola();
};

#endif