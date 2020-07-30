#include "nodo.h"

Nodo::Nodo(string val)
{
    this->val=val;
    this->derecha=NULL;
    this->izquierda=NULL;
}

string Nodo::getVal(){return this->val;}
void Nodo::setVal(string val){this->val=val;}
void Nodo::setDerecha(Nodo *derecha){this->derecha=derecha;}
void Nodo::setIzquierda(Nodo *izquierda){this->izquierda=izquierda;}
Nodo* Nodo::getDerecha(){return this->derecha;}
Nodo* Nodo::getIzquierda(){return this->izquierda;}

