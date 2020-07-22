#ifndef LISTA_H
#define LISTA_H
#include <nodo.h>
#include <iostream>
class Lista
{
public:
    Lista();
    ~Lista();
    int size();
    void add(Nodo *nuevo);
    void delete_item(int i);
    Nodo* get(int i);
    void imprimir();
private:
    Nodo *head,*tail;
    int tam;
};

#endif // LISTA_H
