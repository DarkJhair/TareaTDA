//
// Created by Jhair on 16/12/2017.
//
#ifndef UNTITLE_NODO_H
#define UNTITLE_NODO_H
#include<iostream>
using namespace std;


template<typename T>
class Nodo {
public:
    Nodo* sig;
    Nodo* ant;

    T valor;

    Nodo(T);
};

using namespace std;
template<typename T>
Nodo<T>::Nodo(T valor)
{
    this->valor=valor;
    this->sig=NULL;
    this->ant=NULL;
}

#endif


