#include "lista.h"
#include<stdbool.h>
using namespace std;
LISTA CrearLista(){
LISTA lista= new Lista;
lista->primero=nullptr;
lista->tam=0;
return lista;
}
Nodo *CrearNodo(SUCURSAL sucursal){
Nodo *nodo=new Nodo;
nodo->sucursal=sucursal;
nodo->siguiente=nullptr;
return nodo;
}
bool EstaVacia(LISTA lista){
    return (lista->primero==nullptr);
}
void InsertarInicio(LISTA lista, SUCURSAL sucursal){
NODO *nodo=CrearNodo(sucursal);
nodo->siguiente=lista->primero;
lista->primero=nodo;
lista->tam++;
}
void EliminarInicio(LISTA lista){
    if(lista->primero){
    NODO *eliminado=lista->primero;
    lista->primero=lista->primero->siguiente;
    EliminarNodo(eliminado);
    lista->tam--;
    }
}
void EliminarUltimo(LISTA lista){
if(!EstaVacia(lista)){
    if(lista->primero->siguiente){
    Nodo* puntero=lista->primero;
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
void LiberarLista(LISTA lista){
while(lista->primero!=nullptr){
EliminarUltimo(lista);
}
lista=nullptr;
}
void EliminarNodo(NODO *nodo){
delete(nodo);
}
int ObtenerTamanio(LISTA lista){
return lista->tam;
}

SUCURSAL ObtenerSucursalPorId(LISTA lista,int id, int pos){
int i,cant;
bool band=false;
    NODO *puntero;
    puntero=lista->primero;
    cant=ObtenerTamanio(lista);
    while(band==false && i<cant){
        if(GetId(puntero->sucursal)==id){
            band=true;
        }
        puntero=puntero->siguiente;
        i++;
    }
    return puntero->sucursal;

}
SUCURSAL ObtenerSucursal(LISTA lista, int pos){
    NODO *aux;
    aux=lista->primero;
    for(int i=0; i < pos; i++) {
        aux = aux->siguiente;
    }
return aux->sucursal;
}
void InsertarFinal(LISTA lista, SUCURSAL sucursal){
  if(EstaVacia(lista)){
    InsertarInicio(lista,sucursal);
    }else{
    NODO *nodo=CrearNodo(sucursal);
    NODO *puntero=lista->primero; //*puntero tiene la cabeza si cambia esta variable cambia cabeza por el * y el =
        while(puntero->siguiente){ //Mientras puntero tenga siguiente, si tiene null entonces sale del bucle
        puntero=puntero->siguiente;//solo esta recorriendo, no esta asignando, cuando encuentra el puntero con null se detiene
        }
    puntero->siguiente=nodo;// ahora cuando encontro el puntero que tiene null, le asigna su siguiente el nodo creado
    lista->tam++;
    }
}
