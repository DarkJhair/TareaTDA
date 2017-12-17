#include <iostream>
using namespace std;

#include "ListaTDA.h"



int main() {
    ListaTDA<string> lista;
    cout << "Hello, World!" << endl;
    lista.agregar("hola");
    lista.agregar("2");
    lista.agregar("ddd");
    return 0;
}