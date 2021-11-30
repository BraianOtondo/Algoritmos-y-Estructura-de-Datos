#include <iostream>
#include<string.h>
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

void ListadoTotal(SUCURSAL sucursal[],int cant){
int i=0;
float zona[5]{0,0,0,0,0};
do{
    switch(GetZona(sucursal[i])){
    case norte: zona[0]=zona[0]+GetFactura(sucursal[i]);
    i++;
    break;
    case sur: zona[1]=zona[1]+ GetFactura(sucursal[i]);
    i++;
    break;
    case este: zona[2]=zona[2]+GetFactura(sucursal[i]);
    i++;
    break;
    case oeste: zona[3]=zona[3]+GetFactura(sucursal[i]);
    i++;
    break;
    case centro: zona[4]=zona[4]+GetFactura(sucursal[i]);
    i++;
    break;
    }
}while(i<cant);

 for(i=0;i<5;i++){
    cout<<"La zona "<<i+1 <<" tuvo un total de: "<<zona[i]<<endl;
}
}

float MinimoSucursal(SUCURSAL sucursal[],int cant,int *pos){
float minimo=GetFactura(sucursal[0]);
int i;
for(i=1;i<cant;i++){
    if(GetFactura(sucursal[i])<minimo){
        *pos=i;
        minimo=GetFactura(sucursal[i]);
    }
}
return minimo;
}

float MaximoSucursal(SUCURSAL sucursal[],int cant,int *pos){
float maximo=GetFactura(sucursal[0]);
int i;
for(i=1;i<cant;i++){
    if(GetFactura(sucursal[i])>maximo){
        *pos=i;
        maximo=GetFactura(sucursal[i]);
    }
}
return maximo;
}
