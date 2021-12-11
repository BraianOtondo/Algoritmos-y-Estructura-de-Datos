#include <iostream>
#include "cola.h"
using namespace std;

int main(){

    COLA cola=CrearCola();
    Encolar(cola,1);
    Encolar(cola,2);
    Encolar(cola,3);
    Encolar(cola,4);
    Encolar(cola,5);
    ImprimirCola(cola);
    cout<<"-------------------------------"<<endl;
    Desencolar(cola);
    ImprimirCola(cola);



    return 0;
}
