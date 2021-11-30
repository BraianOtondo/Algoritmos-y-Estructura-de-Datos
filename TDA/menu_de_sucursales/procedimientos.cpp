#include <iostream>
#include "procedimientos.h"
using namespace std;
void Salir(){
cout<<"Gracias por usar el programa..."<<endl;
system ("pause");
system("cls");
}
ZONA ElegirZona(){
ZONA zona;
int opcion;

    while(opcion==0){
        cout<<"Ingrese una opcion: "<<endl;
        cout<<"0.Salir"<<endl;
        cout<<"1.Norte"<<endl;
        cout<<"2.Sur"<<endl;
        cout<<"3.Este"<<endl;
        cout<<"4.Oeste"<<endl;
        cout<<"5.Centro"<<endl;
        cin>>opcion;
        switch(opcion){
        case 0: Salir();break;
        case 1:zona=norte;break;
        case 2:zona=sur;break;
        case 3:zona=este;break;
        case 4:zona=oeste;break;
        case 5:zona=centro;break;
        default:
        cout<<"Ingrese bien las opciones.."<<endl;
        system("pause");
        system("cls");
        break;

        }
    }
return zona;
}
int GenerarId(){
int id;
cout<<"Ingrese ID de la sucursal"<<endl;
cin>>id;
    while((id<100)||(id>999)){
    cout<<"Por favor ingrese otro ID..."<<endl;
    system("pause");
    system("cls");
    cout<<"Ingrese ID de la sucursal"<<endl;
    cin>>id;

    }
    return id;
}
int Opcion(){
    int opcion;
        cout<<"Ingrese una opcion: "<<endl;
        cout<<"0.Salir"<<endl;
        cout<<"1.Cargar Sucursal"<<endl;
        cout<<"2.Listado total de por zona"<<endl;
        cout<<"3.Minimo de sucursal"<<endl;
        cout<<"4.Maximo de sucursal"<<endl;
        cin>>opcion;
    return opcion;
}

