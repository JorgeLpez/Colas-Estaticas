#include "Constancia.h"

Constancia::Constancia():NombreAlm(""),NombreCarr(""),MatAprob(0),Prom(0)
{
    //ctor
}

Constancia::Constancia(Constancia& c)
{
    NombreAlm = c.NombreAlm;
    NombreCarr = c.NombreCarr;
    MatAprob =c.MatAprob;
    Prom = c.Prom;
}

std::istream &operator>>(std::istream &O, Constancia &X)
{
    std::cout<<"\nNombre del alumno:           ";
    O>>X.NombreAlm;
    std::cout<<"Nombre de la Carrera:        ";
    O>>X.NombreCarr;
    std::cout<<"Total de materias aprobadas: ";
    O>>X.MatAprob;
    std::cout<<"Promedio general:            ";
    O>>X.Prom;

    return O;
}

std::ostream &operator<<(std::ostream &O, Constancia &X)
{
    O<<"\nNombre del alumno:           "<<X.NombreAlm<<std::endl;
    O<<"Nombre de la Carrera:        "<<X.NombreCarr<<std::endl;
    O<<"Total de materias aprobadas: "<<X.MatAprob<<std::endl;
    O<<"Promedio general :           "<<X.Prom<<std::endl;

    return O;
}
