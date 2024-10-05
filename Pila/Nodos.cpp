#include "Nodos.hpp"


Nodos:: Nodos(){};

void Nodos:: cambiar_dato(Dato dato){
    this->dato = dato;
}

void Nodos:: cambiar_direccion(Nodos* nodo_siguiente){
    this->nodo_siguiente = nodo_siguiente;
}

Dato Nodos:: dato_guardado(){
    return dato;
}

Nodos* Nodos:: direccion_siguiente(){
    return nodo_siguiente;
}