#include "cola.h"
COLA CrearCola(){
COLA cola=new Cola;
cola->primero=nullptr;
cola->ultimo=nullptr;
cola->tam=0;
return cola;
}
NODO *CrearNodo(int num){
NODO *nodo= new Nodo;
nodo->num=num;
nodo->siguiente=nullptr;
return nodo;
}
void EliminarNodo(NODO *nodo){
nodo=nullptr;
delete nodo;
}
bool EstaVacia(COLA cola){
return (cola->primero==nullptr);
}
void Encolar(COLA cola,int num){
NODO *nodo=CrearNodo(num);
    if(EstaVacia(cola)){
        cola->primero=nodo;
        cola->ultimo=nodo;
    }else{
    cola->ultimo->siguiente=nodo; // AHORA EL ULTIMO TIENE UN NODO
    cola->ultimo=nodo; // AHORA EL ULTIMO ES EL QUE LLEGO AHORA
    }
}
void Desencolar(COLA cola){
    if(!EstaVacia(cola)){
        NODO *eliminado=cola->primero;
        cola->primero=cola->primero->siguiente;
        EliminarNodo(eliminado);
        cola->tam--;
    }
}
void EliminarCola(COLA cola){
    while(!EstaVacia(cola)){
        Desencolar(cola);
    }
}
void ImprimirCola(COLA cola){
    if(!EstaVacia(cola)){
    NODO *puntero=cola->primero;
        while(puntero){
        cout<<puntero->num<<"-";
        puntero=puntero->siguiente;
        }
    }else{
    cout<<"LA COLA ESTA VACIA"<<endl;
    }

}
