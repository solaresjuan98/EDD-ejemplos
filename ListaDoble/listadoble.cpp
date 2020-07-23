#include "listadoble.h"

ListaDoble::ListaDoble()
{
    this->head=NULL;
}
ListaDoble::~ListaDoble(){
    Nodo* aux=this->head;
    Nodo* tmp;
    while(aux!=NULL){
        tmp=aux->getDerecha();
        delete aux;
        aux=tmp;
    }
}
void ListaDoble::insertarOrdenado(Nodo *nuevo){
    if(this->head==NULL){
        this->head=nuevo;
    }else{
        int valorcabeza=this->head->getVal();
        int valornuevo=nuevo->getVal();
        if(valornuevo<=valorcabeza){
            nuevo->setDerecha(this->head);
            this->head->setIzquierda(nuevo);
            this->head=nuevo;
        }else{
            Nodo* aux=this->head;
            while(aux!=NULL){
                if(aux->getIzquierda()!=NULL){
                    if(valornuevo>aux->getIzquierda()->getVal()&&valornuevo<=aux->getVal()){
                        Nodo *izq=aux->getIzquierda();
                        Nodo *der=aux;
                        izq->setDerecha(nuevo);
                        nuevo->setIzquierda(izq);
                        nuevo->setDerecha(der);
                        der->setIzquierda(nuevo);
                        break;
                    }
                }
                if(aux->getDerecha()==NULL){
                    aux->setDerecha(nuevo);
                    nuevo->setIzquierda(aux);
                    break;
                }
                aux=aux->getDerecha();
            }
        }
    }
}

string ListaDoble::generar(){
    ostringstream cadena;
    cadena<<"digraph G {"<<endl<<"node[shape=\"record\"];"<<endl;
    cadena<<"rankdir=LR;"<<endl;
    cadena<<generar(this->head)<<endl;
    cadena<<"}"<<endl;
    return cadena.str();
}
string ListaDoble::generar(Nodo* aux){
    ostringstream cadena;
    if(aux!=NULL){
        cadena<<"nodo"<<&(*aux)<<"[label=\""<<aux->getVal()<<"\"];"<<endl;
        Nodo* siguiente=aux->getDerecha();
        //Creacion de nodos

        cadena<< (siguiente==NULL?"":generar(siguiente));
        //Union de nodos
        if(siguiente!=NULL){
            cadena<<"nodo"<<&(*siguiente)<<"->nodo"<<&(*aux)<<";"<<endl;
            cadena<<"nodo"<<&(*aux)<<"->nodo"<<&(*siguiente)<<";"<<endl;
        }
    }
    return cadena.str();
}

void ListaDoble::imprimir(){
    Nodo* aux=this->head;
    while(aux!=NULL){
        cout<<"Elemento : "<<aux->getVal()<<endl;
        aux=aux->getDerecha();
    }
    cout<<"------------------------------"<<endl;
}
