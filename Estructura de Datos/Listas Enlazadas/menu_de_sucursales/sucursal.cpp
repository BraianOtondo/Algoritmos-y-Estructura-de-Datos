#include <iostream>
#include<string.h>
#include <stdbool.h>
#include "sucursal.h"
using namespace std;
SUCURSAL CrearSucursal(){
int id;
char direccion[50];
float factura;
ZONA zona;
SUCURSAL sucursal=new StructSucursal;
id=GenerarId();
setId(sucursal,id);
cout<<"Ingrese Direccion: "<<endl;
cin>>direccion;
setDireccion(sucursal,direccion);
zona=ElegirZona();
setZona(sucursal,zona);
cout<<"Ingrese factura"<<endl;
cin>>factura;
setFactura(sucursal,factura);
return sucursal;
}
void EliminarSucursal(SUCURSAL sucursal){
delete sucursal;
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
int GetId(SUCURSAL sucursal){
return sucursal->id;
}
char *GetDireccion(SUCURSAL sucursal){
return sucursal->direccion;
}
ZONA GetZona(SUCURSAL sucursal){
return sucursal->zona;
}
float GetFactura(SUCURSAL sucursal){
return sucursal->factura;
}
void MostrarSucursal(SUCURSAL sucursal){
cout<<"ID: "<<GetId(sucursal)<<endl;
cout<<"Direccion: "<<GetDireccion(sucursal)<<endl;
cout<<"Zona: "<<GetZona(sucursal)<<endl;
cout<<"Factura: "<<GetFactura(sucursal)<<endl;
}

ZONA ElegirZona(){
ZONA zona;
int opcion;
bool band=false;
    do{
        cout<<"Ingrese una opcion: "<<endl;
        cout<<"1.Norte"<<endl;
        cout<<"2.Sur"<<endl;
        cout<<"3.Este"<<endl;
        cout<<"4.Oeste"<<endl;
        cout<<"5.Centro"<<endl;
        cin>>opcion;
        switch(opcion){
        case 1:zona=norte;
        band=true;
        break;
        case 2:zona=sur;
        band=true;
        break;
        case 3:zona=este;
        band=true;
        break;
        case 4:zona=oeste;
        band=true;
        break;
        case 5:zona=centro;
        band=true;
        break;
        default:
        cout<<"Ingrese bien las opciones.."<<endl;
        system("pause");
        system("cls");
        break;

        }
    }while(band==false);
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



