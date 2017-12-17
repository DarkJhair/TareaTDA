#include <iostream>
using namespace std;

#include "ListaTDA.h"
#include "Grafofo.h"


int main() {
    ListaTDA<string> lista;
    Grafofo hola;
    int opc;

    do {
        cout << "******Menu******" << endl;
        cout << "1. Agregar vertice" << endl;
        cout << "2. Agregar Aristas" << endl;
        cout << "**Coloca -1 para salir" << endl;
        cout << "-> Ingrese su opcion aqui: ";
        cin>>opc;

        string nom;


        switch(opc){
            case 1:
                cout<<"----------------------------------------------"<<endl;
                cout<<"*****- Agrega un vertice perrooo -*****"<<endl;
                cout<<"-> Ingresa el nombre del vertice <-"<<endl;
                cin>>nom;

                hola.aggvertice(nom);
                cout<<"----------------------------------------------"<<endl;
                break;
            case 2:
                int peso;
                string inicio,destino;
                cout<<"----------------------------------------------"<<endl;
                cout<<"*****- Crear una 2 vertices para crear arista -*****"<<endl;
                cout<<"Ingresa el peso"<<endl;
                cin>>peso;
                cout<<"Agrega el inicio de la arista"<<endl;
                cin>>inicio;
                cout<<"Agrega el destino de la arista"<<endl;
                cin>>destino;

                hola.aggArista(peso,inicio,destino);
                cout<<"----------------------------------------------"<<endl;
                break;
        }
    }while(opc!=-1);



    return 0;
}