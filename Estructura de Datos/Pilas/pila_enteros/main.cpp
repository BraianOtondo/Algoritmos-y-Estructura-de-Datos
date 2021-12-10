#include <iostream>
#include "pila.h"
using namespace std;

int main(){
    PILA pila=CrearPila();
    Push(pila,1);
    Push(pila,2);
    Push(pila,3);
    Push(pila,4);
    Push(pila,5);

    MostrarPila(pila);
    Pop(pila);
      cout<<"--------------------------------------"<<endl;
    MostrarPila(pila);
    EliminarPila(pila);


    return 0;
}
