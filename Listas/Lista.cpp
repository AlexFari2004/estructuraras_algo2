
#include "Lista.hpp"
#include <iostream>

const int PRIMERA_POS = 0;

Lista:: Lista(){
    nodo = nullptr;
    tamanio = 0;
}
        
Lista:: ~Lista(){

    Nodo* nodo_aux;

    for (int i = 0; i < tamanio; i++){

        nodo_aux  = nodo->direccion_siguiente();
        delete nodo;
        nodo = nodo_aux;

    }

}

Nodo* Lista:: obtener_Nodo_Anterior(int pos){

    Nodo* nodo_anterior = nodo;

    for (int i = 1; i < pos; i++){
        nodo_anterior = nodo_anterior->direccion_siguiente();
    }
    return nodo_anterior;
}

void Lista:: insercion(Dato dato, int pos){

    Nodo* nuevo_nodo = new Nodo(dato);

    if(pos == PRIMERA_POS){
        nuevo_nodo->cambiar_direccion(nodo);
        nodo = nuevo_nodo;
    }
    else{

        Nodo* anterior = obtener_Nodo_Anterior(pos);
        nuevo_nodo->cambiar_direccion(anterior->direccion_siguiente());
        anterior->cambiar_direccion(nuevo_nodo);

    }
    tamanio++;
}

void Lista:: insercion(Dato dato){
    Nodo* nuevo_nodo = new Nodo(dato);
    nuevo_nodo->cambiar_direccion(nullptr);

    if(tamanio == 0){
        nodo = nuevo_nodo;
    }
    else {
        Nodo* anterior = obtener_Nodo_Anterior(tamanio);
        anterior->cambiar_direccion(nuevo_nodo);
    }

    tamanio++;

}

void Lista:: eliminar(int pos){

    if(pos == PRIMERA_POS){

        Nodo* nodo_aux = nodo->direccion_siguiente();
        delete nodo;
        nodo = nodo_aux;
        
    }
    else{

        Nodo* anterior = obtener_Nodo_Anterior(pos);
        Nodo* nodo_eliminar = anterior->direccion_siguiente();
        anterior->cambiar_direccion(nodo_eliminar->direccion_siguiente());
        delete nodo_eliminar;

    }

    tamanio--;
}

int Lista:: tamanio_lista(){
    return tamanio;
}

void Lista:: mostrar_lista(){
    Nodo* nodo_aux = nodo;

    for (int i = 0; i < tamanio; i++){
        std:: cout << nodo_aux->dato_guardado() << std:: endl; 
        nodo_aux = nodo_aux->direccion_siguiente();
    }
}