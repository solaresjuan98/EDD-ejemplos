#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>

#include "nodo.h"
using namespace std;
class ListaCircular
{
public:
    ListaCircular();
    ~ListaCircular();
    void insertar(Nodo* nuevo);
    void graficar();
    void mostrar();
private:
    string graficar(Nodo* aux);
    Nodo *cabeza;
};

#endif // LISTACIRCULAR_H
