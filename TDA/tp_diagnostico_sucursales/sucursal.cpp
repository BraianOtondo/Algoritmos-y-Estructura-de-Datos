#include <iostream>
#include <stdlib.h>
#include<string.h>
#include "sucursal.h"

using namespace std;
SUCURSAL CrearSucursal(){
int id;
char direccion[50];
ZONA zona;
float factura;
SUCURSAL sucursal=new StructSucursal;
cout<<"Ingrese Id: "<<endl;
cin>>id;
setId(sucursal,id);
cout<<"Ingrese Direccion: "<<endl;
cin>>direccion;
setDireccion(sucursal,direccion);
setZona(sucursal,ElegirZona());
cout<<"Ingrese factura"<<endl;
cin>>factura;
setFactura(sucursal,factura);
return sucursal;
}

void setId(SUCURSAL sucursal,int id){
sucursal->id=id;
}
void setDireccion(SUCURSAL sucursal,const char direccion[]){
strcpy(sucursal->direccion,direccion);
}
void setZona(SUCURSAL sucursal,ZONA zona){
sucursal->zona=zona;
}
void setFactura(SUCURSAL sucursal,float factura){
sucursal->factura=factura;
}

void Salir(){
cout<<"Gracias por usar el programa..."<<endl;
system ("pause");
system("cls");
}
ZONA ElegirZona(){
ZONA zona;
int opcion;

    do{
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
        printf("Ingrese bien las opciones..\n");
        system("pause");
        system("cls");
        break;

        }
    }while(opcion==0);
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
