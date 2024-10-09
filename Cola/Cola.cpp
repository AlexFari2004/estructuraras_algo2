#include "Cola.hpp" 
#include <iostream>

Cola:: Cola(){
    tamanio = 0;
    nodo = nullptr;
}

Cola:: ~Cola(){
    Nodo* nodo_aux;

    for (int i = 0; i < tamanio; i++){

        nodo_aux = nodo->direccion_siguiente();
        delete nodo;
        nodo = nodo_aux;

    }
}

Nodo* Cola:: obtener_ultimo_nodo(){
    Nodo* nodo_aux = nodo;
    for(int i = 1; i < tamanio; i++){
        nodo_aux = nodo_aux->direccion_siguiente();
    }
    return nodo_aux;
}

void Cola:: alta(Dato dato){
    Nodo* nuevo_nodo = new Nodo(dato);
    nuevo_nodo->cambiar_direccion(nullptr);

    if(tamanio == 0){
        nodo = nuevo_nodo;
    }
    else{

        Nodo* ultimo_nodo = obtener_ultimo_nodo();
        ultimo_nodo->cambiar_direccion(nuevo_nodo);

    }
    tamanio++;
}

void Cola:: baja(){
    
    Nodo* nodo_aux = nodo->direccion_siguiente();
    delete nodo;
    nodo = nodo_aux;

}

Dato Cola:: consulta(){
    return nodo->dato_guardado();
}

int Cola:: tamanio_cola(){
    return tamanio;
}

bool Cola:: esta_vacia(){
    return (nodo == nullptr);
}

void Cola:: mostrar_cola(){
    Nodo* nodo_aux = nodo;
    for (int i = 0; i < tamanio; i++){
        std:: cout << nodo_aux->dato_guardado() << std:: endl;
        nodo_aux = nodo_aux->direccion_siguiente();
    }
}