#include <iostream>
#include <stdbool.h>
#include "lista.h"
using namespace std;
LISTA CrearLista(){
LISTA lista=new Lista;
lista->cabeza=nullptr;
lista->tam=0;
return lista;
}
NODO *CrearNodo(int num){
NODO *nodo=new Nodo;
nodo->num=num;
nodo->siguiente=nullptr;
return nodo;
}
bool EstaVacia(LISTA lista){
return (lista->cabeza==nullptr);
}
int ObtenerTamanio(LISTA lista){
return lista->tam;
}
// INSERTAR
void InsertarInicio(LISTA lista, int num){
NODO *nodo=CrearNodo(num);
nodo->siguiente=lista->cabeza;
lista->cabeza=nodo;
lista->tam++;
}
void InsertarFinal(LISTA lista, int num){
  if(EstaVacia(lista)){
    InsertarInicio(lista,num);
    }else{
    NODO *nodo=CrearNodo(num);
    NODO *puntero=lista->cabeza; //*puntero tiene la cabeza si cambia esta variable cambia cabeza por el * y el =
        while(puntero->siguiente){ //Mientras puntero tenga siguiente, si tiene null entonces sale del bucle
        puntero=puntero->siguiente;//solo esta recorriendo, no esta asignando, cuando encuentra el puntero con null se detiene
        }
    puntero->siguiente=nodo;// ahora cuando encontro el puntero que tiene null, le asigna su siguiente el nodo creado
    lista->tam++;
    }
}
void Insertar(LISTA lista,int num,int pos){
    if(EstaVacia(lista)){
    InsertarInicio(lista,num);
    }else{
    NODO *nodo=CrearNodo(num);
    NODO *puntero=lista->cabeza;

    for(int i=0;i<pos-1;i++){
    puntero=puntero->siguiente;//
    }

    nodo->siguiente=puntero->siguiente;
    puntero->siguiente=nodo;
    lista->tam++;
}


}



//ELIMINAR
void EliminarNodo(NODO *nodo){
delete(nodo);
}
void EliminarInicio(LISTA lista){
    if(lista->cabeza){
    NODO *eliminado=lista->cabeza;
    lista->cabeza=lista->cabeza->siguiente;
    EliminarNodo(eliminado);
    lista->tam--;
    }
}
void EliminarUltimo(LISTA lista){
if(!EstaVacia(lista)){
    if(lista->cabeza->siguiente){
    Nodo* puntero=lista->cabeza;
        while(puntero->siguiente->siguiente){
        puntero=puntero->siguiente;
        }
        Nodo *eliminado=puntero->siguiente;
        puntero->siguiente=nullptr;
        EliminarNodo(eliminado);
        lista->tam--;
        }else{
            EliminarInicio(lista);
        }
}
}
void Eliminar(LISTA lista, int pos){
if(pos<0||pos>=lista->tam){
  cout<<"Indice invalido"<<endl;
}else{
    if(!EstaVacia(lista)){
        if(pos==0){
        EliminarInicio(lista);
        }else{
        NODO *puntero=lista->cabeza;
            for(int i=0;i<pos-1;i++) {
            puntero=puntero->siguiente;
            }
        NODO *eliminado=puntero->siguiente;
        puntero->siguiente=eliminado->siguiente;
        EliminarNodo(eliminado);
        lista->tam--;
        }

    }

    }
}

void EliminarLista(LISTA lista){
while(!EstaVacia(lista)){
EliminarUltimo(lista);
}
lista=nullptr;
delete lista;
}

void ImprimirLista(LISTA lista){
if(!EstaVacia(lista)){
 NODO *puntero=lista->cabeza;
    while(puntero){ //mientras puntero tenga algo
        cout<<"DATO : "<<puntero->num<<endl;
        puntero=puntero->siguiente;
    }
}else{
    cout<<"La lista está vacia "<<endl;
}

}
