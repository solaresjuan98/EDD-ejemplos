#include "listacircular.h"
#include <ostream>
ListaCircular::ListaCircular()
{
    this->cabeza=NULL;
}
ListaCircular::~ListaCircular(){
    Nodo* aux,*tmp=NULL;
    aux=this->cabeza;
    do{
        tmp=aux->getIzquierda();
        delete aux;
        aux=tmp;
    }while(aux!=cabeza);
}

void ListaCircular::insertar(Nodo *nuevo){
    if(this->cabeza==NULL){
        this->cabeza=nuevo;
        nuevo->setDerecha(nuevo);
        nuevo->setIzquierda(nuevo);
    }else{
        Nodo* ultimo=this->cabeza->getIzquierda();
        ultimo->setDerecha(nuevo);
        nuevo->setIzquierda(ultimo);
        nuevo->setDerecha(this->cabeza);
        this->cabeza->setIzquierda(nuevo);
    }
}

void ListaCircular::mostrar(){
    Nodo *aux=this->cabeza;
    do{
        cout<<aux->getVal()<<endl;
        aux=aux->getDerecha();
    }while(aux!=this->cabeza);
}

void ListaCircular::graficar(){
    ostringstream cadena;
    cadena<<"digraph G {"<<endl<<"node[shape=\"record\"];"<<endl;
    cadena<<"rankdir=LR;"<<endl;
    Nodo* aux=this->cabeza;
    do{
        cadena<<graficar(aux)<<endl;
        aux=aux->getDerecha();
    }while(aux!=cabeza);
    cadena<<"}"<<endl;
    ofstream file("salida.dot");
    file<<cadena.str();
    file.close();

    system("circo -Tpng salida.dot -o imagen.png");
    cout<<cadena.str()<<endl;
}

string ListaCircular::graficar(Nodo* aux){
    ostringstream cadena;

    cadena<<"nodo"<<&(*aux)<<"[label=\""<<aux->getVal()<<"\"];"<<endl;
    //Union de nodos
    cadena<<"nodo"<<&(*aux->getDerecha())<<"->nodo"<<&(*aux)<<";"<<endl;
    cadena<<"nodo"<<&(*aux)<<"->nodo"<<&(*aux->getDerecha())<<";"<<endl;

    return cadena.str();
}
