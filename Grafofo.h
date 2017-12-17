//
// Created by Jhair on 16/12/2017.
//

#ifndef UNTITLE_GRAFOFO_H
#define UNTITLE_GRAFOFO_H

#include <iostream>
#include "Vertice.h"
#include "Arista.h"

using namespace std;

class Grafofo {
private:
    ListaTDA<Vertice*>ListaVertices;
    int cantidad_elementosss;

    friend class Vertice;
    friend class Arista;

public:
    Grafofo();
    void aggvertice(string);
    void borrvertice(string);
    void aggArista(int,string,string);
    void eliminarArista(string,string);

};

Grafofo::Grafofo() {
    this->cantidad_elementosss=0;
}

void Grafofo::aggvertice(string nom) {
    ListaVertices.agregar(new Vertice(nom,cantidad_elementosss));
    cantidad_elementosss++;
    cout<<"Vertice agregado correctamente"<<endl;
}

void Grafofo::aggArista(int peso, string inicio, string destino) {
    int cont=0, guardar_inicio=0;
    Arista *nueva_arista = new Arista();
    for (int i = 0; i < ListaVertices.tamano_lista() ; i++) {
        if (ListaVertices.obtener(i)->nombre == inicio) {
            nueva_arista->ini = ListaVertices.obtener(i);
            guardar_inicio = i;
            cont ++;
        }
        if (ListaVertices.obtener(i)->nombre == destino) {
            nueva_arista->dest = ListaVertices.obtener(i);
            cont ++;
        }
    }
    if(cont<2){
        cout<<"Faltan vertices o no existen"<<endl;
    } else{
        nueva_arista->peso=peso;
        ListaVertices.obtener(guardar_inicio)->ListaArista.agregar(nueva_arista);
        cout<<"se agrego correctamente"<<endl;
    }
}





#endif //UNTITLE_GRAFOFO_H
