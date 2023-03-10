#include<iostream>
#include "Cola.h"

Cola::Cola()
{
    Frente=0;
    ult=0;
}

bool Cola::Vacia()
{
   return Frente==ult;
}

bool Cola::Llena()
{
    return ult==TAM-1;
}

bool Cola::Enqueue(Constancia Dato)
{
    if(!Llena()){
        dato[ult]=Dato;
        ult++;
        return true;
    }else{
        return false;
    }
}

void Cola::Dequeue()
{
    if(!Vacia())
        Frente++;
}

Constancia Cola::Front()
{
    if(!Vacia())
        return dato[Frente];

}
