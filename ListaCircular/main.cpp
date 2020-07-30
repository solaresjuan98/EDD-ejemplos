#include <iostream>
#include "nodo.h"
#include "listacircular.h"
using namespace std;

int main()
{
    ListaCircular* lista=new ListaCircular();
    Nodo *a,*b,*c,*d,*e,*f,*g,*h,*i;
    a=new Nodo("hola");
    b=new Nodo("como");
    c=new Nodo("estas");
    d=new Nodo("bien");
    e=new Nodo("gracias");
    f=new Nodo("edd");
    g=new Nodo("sale");
    h=new Nodo("en");
    i=new Nodo("2020");
    lista->insertar(a);
    lista->insertar(b);
    lista->insertar(c);
    lista->insertar(d);
    lista->insertar(e);
    lista->insertar(f);
    lista->insertar(g);
    lista->insertar(h);
    lista->insertar(i);
    lista->mostrar();
    lista->graficar();
    delete lista;
    return 0;
}
