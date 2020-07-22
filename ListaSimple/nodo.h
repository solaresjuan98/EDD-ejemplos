#ifndef NODO_H
#define NODO_H
#include <string.h>
#include <iostream>
#include <stddef.h>

using namespace std;
class Nodo
{
public:
    Nodo(string nombre,int edad);
    ~Nodo();
    string getNombre();
    int getEdad();
    Nodo *getSiguiente();
    void setSiguiente(Nodo *sig);
    void imprimir();
private:
    string nombre;
    int edad;
    Nodo *siguiente;
};
#endif // NODO_H
