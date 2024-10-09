#ifndef Nodo_HPP
#define Nodo_HPP
typedef int Dato;
class Nodo {
    private:

        Dato dato;

        Nodo* nodo_siguiente;

    public:

        Nodo();

        Nodo(Dato dato);

        void cambiar_dato(Dato dato);

        void cambiar_direccion(Nodo* nodo_siguiente);

        Dato dato_guardado();

        Nodo* direccion_siguiente();
};

#endif