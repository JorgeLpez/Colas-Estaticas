#include <iostream>
#include "Cola.h"
#include "Constancia.h"

using namespace std;

int main()
{
    int opc,cont;
    Cola micola;
    Constancia X;
    do{
        system("cls");
        cout<<"\n\tCONSTANCIAS DE ESTUDIO"<<endl<<endl;
        cout<<"1. Generar solicitud para constancia."<<endl;
        cout<<"2. Recibir constancia."<<endl;
        cout<<"3. Salir."<<endl<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opc;

        switch(opc){

            case 1: system("cls");
                    cont++;
                    cout<<"\n\tUsted tiene el turno #"<<cont<<" Ingrese sus datos: "<<endl;
                    cin>>X;
                    if(micola.Enqueue(X)){
                        cout<<"\n"<<endl;
                    }else{
                        cout<<"\nError!, La Cola esta llena."<<endl;

                    }
                    system("pause");
                    break;

            case 2: system("cls");
                    cout<<"\n\tElaborando constancia: "<<endl;
                    if(micola.Vacia()){
                        cout<<"La cola esta vacia."<<endl;
                    }else{
                        X=micola.Front();
                        cout<<X<<endl;
                    }
                    micola.Dequeue();
                    system("pause");
                    break;
        }

    }while(opc!=3);
}
