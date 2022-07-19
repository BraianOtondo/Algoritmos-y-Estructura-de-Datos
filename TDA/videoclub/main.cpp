#include <iostream>
#include "listado.cpp"
using namespace std;

int main(){
LISTADO lista[2];
lista[0]=CrearListado(false,"Stranger Things","Adolescente",2016,2,true,"BraianOtondo");
lista[1]=CrearListado(false,"Loki","Marvel",2021,5,true,"BraianOtondo");
lista[2]=CrearListado(true,"Thor Love And Thunder","Barbaro",2022,2,true,"BraianOtondo");

OrdenarPorCaracteresAscentente(lista,3);

    return 0;
}
