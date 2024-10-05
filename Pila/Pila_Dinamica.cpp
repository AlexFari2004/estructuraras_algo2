#include "Pila_Dinamica.hpp"

Pila:: Pila(){
    tope = nullptr;
}

Pila:: ~Pila(){
    delete tope;
}

void Pila:: alta(Dato datos){

    Nodos* nuevo_nodo = new Nodos;
    
    nuevo_nodo->cambiar_dato(datos);
    
    nuevo_nodo->cambiar_direccion(tope);
    
    tope = nuevo_nodo;

}

void Pila:: baja(){
    Nodos* direccion_actual = tope->direccion_siguiente();
    delete tope;
    tope = direccion_actual;
}

Dato Pila:: consulta(){
    return tope->dato_guardado();
}

bool Pila:: esta_vacia(){
    return tope == nullptr;
}