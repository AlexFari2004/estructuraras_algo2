#include "Nodo.hpp"

typedef int Dato;

class Lista {

    private:
        //Atributos
        Nodo* nodo; //Guardo el primero nodo ingresado
        int tamanio;

        //Metodos privados
        Nodo* obtener_Nodo_Anterior(int pos);

    public:

        //Metodos publicos
        Lista();
        
        ~Lista();

        void insercion(Dato dato, int pos);

        void insercion(Dato dato);
        
        void eliminar(int pos);

        void mostrar_lista();

        int tamanio_lista();

};