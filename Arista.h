//
// Created by Jhair on 16/12/2017.
//

#ifndef UNTITLE_ARISTA_H
#define UNTITLE_ARISTA_H

#include <iostream>
using namespace std;

class Vertice;
class Grafofo;

class Arista {
public:
    Vertice* ini;
    Vertice* dest;
    int peso;

    Arista();


    friend class Vertice;
    friend class Grafofo;

};

Arista::Arista() {}


#endif //UNTITLE_ARISTA_H
