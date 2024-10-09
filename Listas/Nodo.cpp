#include "Nodo.hpp"


Nodo:: Nodo(){};

Nodo:: Nodo(Dato dato){
    this->dato = dato;
}

void Nodo:: cambiar_dato(Dato dato){
    this->dato = dato;
}

void Nodo:: cambiar_direccion(Nodo* nodo_siguiente){
    this->nodo_siguiente = nodo_siguiente;
}

Dato Nodo:: dato_guardado(){
    return dato;
}

Nodo* Nodo:: direccion_siguiente(){
    return nodo_siguiente;
}