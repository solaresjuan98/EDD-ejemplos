#include "nodo.h"
#include <iostream>
Nodo::Nodo(string nombre,int edad)
{
    this->edad=edad;
    this->nombre=nombre;
    this->siguiente=NULL;
}

int Nodo::getEdad(){
    return this->edad;
}

Nodo* Nodo::getSiguiente(){
    return this->siguiente;
}

void Nodo::setSiguiente(Nodo *sig){
    this->siguiente=sig;
}
string Nodo::getNombre(){
    return this->nombre;
}

void Nodo::imprimir(){
    cout<<"Nombre: "<<this->nombre<<" Edad: "<<this->getEdad()<<endl;
}

Nodo::~Nodo(){
    cout<<"Nodo eliminado"<<endl;
}
