#include "lista.h"
using namespace std;
Lista::Lista()
{
    this->head=NULL;
    this->tam=0;
}

void Lista::add(Nodo *nuevo){
    if(head==NULL){
        this->head=nuevo;
        this->tail=nuevo;
        tam++;
    }else{
        this->tail->setSiguiente(nuevo);
        this->tail=nuevo;
        tam++;
    }
}

void Lista::imprimir(){
    Nodo *aux=this->head;
    while(aux!=NULL){
        cout<<"Nombre "<<aux->getNombre()<<" Edad: "<<aux->getEdad()<<endl;
        aux=aux->getSiguiente();
    }
}

int Lista::size (){
    return this->tam;
}

Nodo* Lista::get(int i){
    Nodo* aux=this->head;
    if(i<0){return NULL;}
    while(aux!=NULL){
        if(i==0){return aux;}
        i--;
        aux=aux->getSiguiente();
    }
}

Lista::~Lista(){
    Nodo *aux=this->head;
    Nodo *temporal;
    while(aux!=NULL){
        temporal=aux->getSiguiente();
        delete aux;
        aux=temporal;
    }
}

void Lista::delete_item(int i){
    Nodo* aux=this->head;
    Nodo* ant=aux;
    if(i<0){return ;}
    while(aux!=NULL){
        if(i==0){
            this->tam--;
            ant->setSiguiente(aux->getSiguiente());
            if(aux==this->head){
                this->head=aux->getSiguiente();
            }else if(aux==this->tail){
                this->tail=ant;
            }
            delete aux;
            return;
        }
        i--;
        ant=aux;
        aux=aux->getSiguiente();
    }
}





