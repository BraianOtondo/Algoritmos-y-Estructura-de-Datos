#include <iostream>

using namespace std;

int main(){

    cout << "Punteros: " << endl;
    int n1=3;
    int n2;

    int *PunteroEntero; // creamos un puntero que va apuntar a un entero

    PunteroEntero=&n1; // le ponemos la direccion que queremos guardar a a ese puntero
    cout<<"Direccion de n1: "<<&n1<<endl;
    cout<<"PunteroEntero(contenido): "<<*PunteroEntero<<endl; // mostramos el contenido de ese puntero
    cout<<"PunteroEntero(direccion): "<<PunteroEntero<<endl; // mostramos la direccion de ese puntero

    PunteroEntero=&n2; // Guarda ahora direccion de n2
    cout<<"PunteroEntero(contenido): "<<*PunteroEntero<<endl; // mostramos el contenido de ese puntero- en este caso muestra basura porque nunca tuvo contenido
    cout<<"PunteroEntero(direccion): "<<PunteroEntero<<endl; // mostramos la direccion de ese puntero
    *PunteroEntero=10; // cambiamos el contenido de ese puntero
    cout<<"PunteroEntero(contenido): "<<*PunteroEntero<<endl; // mostramos el contenido de ese puntero- ahora es 10
    cout<<"PunteroEntero(direccion): "<<PunteroEntero<<endl; // mostramos la direccion de ese puntero


    return 0;
}
