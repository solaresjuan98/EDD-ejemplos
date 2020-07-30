#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
class Nodo
{
public:
    Nodo(string val);
    Nodo *getDerecha();
    Nodo *getIzquierda();
    void setDerecha(Nodo *derecha);
    void setIzquierda(Nodo *izquierda);
    void setVal(string val);
    string getVal();
private:
    Nodo *izquierda;
    Nodo *derecha;
    string val;
};

#endif // NODO_H
