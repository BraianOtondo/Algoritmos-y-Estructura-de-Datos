#include <iostream>
#include "lista.h"
using namespace std;

int main(){
LISTA lista=CrearLista();
InsertarInicio(lista,2);
InsertarInicio(lista,1);
InsertarInicio(lista,0);

//Insertar(lista,7,1);
ImprimirLista(lista);
cout<<"-----------------------------------------------------"<<endl;
Eliminar(lista,1);
ImprimirLista(lista);
EliminarLista(lista);
cout<<"-------------------------------------"<<endl;
ImprimirLista(lista);

    return 0;
}
