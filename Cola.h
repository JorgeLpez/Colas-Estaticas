#ifndef COLA_H
#define COLA_H
#include "Constancia.h"
#define TAM 50

class Cola
{
    private:
        Constancia dato[TAM];
        int Frente,ult;
    public:
        Cola();
        bool Vacia();
        bool Llena();
        bool Enqueue(Constancia);
        void Dequeue();
        Constancia Front();

};

#endif // COLA_H
