#include <iostream>
#include <lista.h>
#include <nodo.h>
using namespace std;

int main()
{
    Lista *l=new Lista();
    Nodo *a,*b,*c;
    a=new Nodo("Marvin",23);
    b=new Nodo("Juan",10);
    c=new Nodo("Martha",23);
    l->add(a);
    l->add(b);
    l->add(c);
    l->imprimir();
    Nodo *d;
    d=l->get(1);
    d->imprimir();


    cout<<endl<<endl<<"Parte de eliminacion"<<endl;
    //eliminar un elemento
    //primer elemento
    l->delete_item(0);
    l->imprimir();
    //eliminar ultimo elemento
    l->delete_item(l->size()-1);
    l->imprimir();

    l->delete_item(0);
    l->imprimir();
    Nodo *e=new Nodo("Prueba",10);
    Nodo *f=new Nodo("Prueba 2",125);
    l->add(e);
    l->add(f);
    l->imprimir();


    delete l;
    return 0;
}
