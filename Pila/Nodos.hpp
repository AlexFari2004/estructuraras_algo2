#ifndef NODOS_HPP
#define NODOS_HPP
typedef int Dato;
class Nodos {
    private:

        Dato dato;

        Nodos* nodo_siguiente;

    public:

        Nodos();

        void cambiar_dato(Dato dato);

        void cambiar_direccion(Nodos* nodo_siguiente);

        Dato dato_guardado();

        Nodos* direccion_siguiente();
};

#endif