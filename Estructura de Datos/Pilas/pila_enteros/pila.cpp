#include "pila.h"
NODO *CrearNodo(int num){
NODO *nodo=new Nodo;
nodo->num=num;
nodo->siguiente=nullptr;
return nodo;
}
void EliminarNodo(NODO* nodo){
delete(nodo);
}
PILA CrearPila(){
PILA pila=new Pila;
pila->cima=nullptr;
pila->tam=0;
return pila;
}
void Push(PILA pila,int num){
NODO *nodo=CrearNodo(num);
nodo->siguiente=pila->cima; //LA CIMA CAMBIA
pila->cima=nodo; // ESTA ES LA NUEVA CIMA
pila->tam++;
}
void Pop(PILA pila){
    if(!EstaVacia(pila)){
    NODO *eliminado=pila->cima;
    pila->cima=eliminado->siguiente;
    EliminarNodo(eliminado);
    pila->tam--;
    }else{
    cout<<"LA PILA ESTA VACIA"<<endl;
    }
}
bool EstaVacia(PILA pila){
return (pila->cima==nullptr);
}
void MostrarPila(PILA pila){
if(EstaVacia(pila)){
cout<<"LA PILA ESTA VACIA"<<endl;
}else{
    NODO* puntero;
    puntero=pila->cima;     // apunta al inicio de la lista
        while(puntero!=nullptr){
            cout<<puntero->num;
            cout<<"- ";
            puntero=puntero->siguiente;

        }


    }

}

void EliminarPila(PILA pila){
    while(!EstaVacia(pila)){
    Pop(pila);
    }
pila=nullptr;
delete pila;
}

