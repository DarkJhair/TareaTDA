//
// Created by Jhair on 16/12/2017.
//

#ifndef UNTITLE_VERTICE_H
#define UNTITLE_VERTICE_H

#include <iostream>
#include "ListaTDA.h"
using namespace std;

class Arista;
class Grafofo;

class Vertice {
private:
    string nombre;
    int num;
    ListaTDA<Arista*>ListaArista;


    friend class Arista;
    friend class Grafofo;

public:
    Vertice(string, int);
};
Vertice::Vertice(string nom, int num) {
    this->num=num;
    this->nombre=nom;
}


#endif //UNTITLE_VERTICE_H
