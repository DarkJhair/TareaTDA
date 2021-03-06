//
// Created by Jhair on 16/12/2017.
//

#ifndef UNTITLE_LISTATDA_H
#define UNTITLE_LISTATDA_H

#include "nodo.h"
using namespace std;
template<typename T>
class ListaTDA {
private:
    Nodo <T>*inicio;
    Nodo <T>*final;
public:
    int cantidad_elementos;

    void agregar(T);
    void insertar_pos(T,int);
    void borrar_poscicion(int);
    T obtener(int);
    int tamano_lista();
    void imprimir();
    ListaTDA();
};

template<typename T>
ListaTDA<T>::ListaTDA(){
    this->cantidad_elementos=0;
    this->inicio=NULL;
    this->final=NULL;
}

template<typename T>
void ListaTDA<T>::agregar(T nom){
    Nodo<T>* nuevo=new Nodo<T>(nom);
    if(inicio==NULL&&final==NULL){
        inicio=nuevo;
        final=nuevo;
    }else{
        final->sig=nuevo;
        nuevo->ant=final;
        final=nuevo;
    }
    cantidad_elementos++;
    return;
}

template<typename T>
void ListaTDA<T>::insertar_pos(T nom,int pos){
    Nodo<T>*nuevo = new Nodo<T>(nom);
    if(pos<cantidad_elementos || pos>cantidad_elementos){
        return;
    }else if(pos==0){
        nuevo->sig=inicio;
        inicio=nuevo->sig;
        }else if(pos==cantidad_elementos){
        final->sig=nuevo;
        nuevo->ant=final;
        final=nuevo;
    }else{
        Nodo<T>*temp=inicio;
        for(int i=0;i<pos-1;i++){
        temp=temp->sig;
        }
        temp->sig->ant = nuevo;
        nuevo->ant = temp;
        nuevo->sig = temp->sig;
        temp->sig = nuevo;

    }
    cantidad_elementos++;
    return;

}
template<typename T>
void ListaTDA<T>::borrar_poscicion(int pos){
    Nodo<T>*eliminar;
    int dato;
    if(pos<cantidad_elementos || pos>cantidad_elementos){
        return;
    }else if(pos==0){
        eliminar=inicio;
        inicio=inicio->sig;
    }else if(pos==cantidad_elementos){
        eliminar=final;
        final=eliminar->ant;
        final->sig=NULL;
    }else{
        Nodo<T>*temp=inicio;
        for(int i=0;i<pos-1;i++){
            temp=temp->sig;
        }
        eliminar=temp->sig;
        dato = eliminar->valor;
        temp->sig=eliminar->sig;
        eliminar->sig->ant=temp;

    }
    delete(eliminar);
    cantidad_elementos--;
    return;
}

template<typename T>
int ListaTDA<T>::tamano_lista() {
    return cantidad_elementos;
}

template <typename T>
T ListaTDA<T>::obtener(int pos) {
    Nodo<T>*tmp;
    for (int i = 0; i < pos; i++) {
        tmp=tmp->sig;
    }
    return tmp->valor;
}


/*

template <typename T>
void ListaTDA<T>::imprimir() {
    Nodo<T>*tmp=inicio;
    cout<<"-------------------------------------"<<endl;
    for (int i = 0; i <= cantidad_elementos ; i++) {
        cout<<"1.Poscicion: "<<i<<endl;
        cout<<"2.Nombre: ";
        cout<< (tmp->valor)<<endl;
        tmp=tmp->sig;
        cout<<"-------------------------------------"<<endl;
    }
}*/


#endif //UNTITLE_NODO_H
