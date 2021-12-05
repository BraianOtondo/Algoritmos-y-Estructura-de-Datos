#include <iostream>
#include<stdbool.h>
#include"sucursal.h"
#include <stdlib.h>
#include "lista.h"
using namespace std;
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
void Salir(){
cout<<"Gracias por usar el programa..."<<endl;
system ("pause");
system("cls");
}
void ListadoTotal(LISTA lista){
float zona[5]{0,0,0,0,0};
int i=0;
int cant=ObtenerTamanio(lista);
NODO *puntero=lista->primero;
do{
    switch(GetZona(puntero->sucursal)){
    case norte: zona[0]=zona[0]+GetFactura(puntero->sucursal);
    i++;
    puntero=puntero->siguiente;
    break;
    case sur: zona[1]=zona[1]+ GetFactura(puntero->sucursal);
    i++;
    puntero=puntero->siguiente;
    break;
    case este: zona[2]=zona[2]+GetFactura(puntero->sucursal);
    i++;
    puntero=puntero->siguiente;
    break;
    case oeste: zona[3]=zona[3]+GetFactura(puntero->sucursal);
    i++;
    puntero=puntero->siguiente;
    break;
    case centro: zona[4]=zona[4]+GetFactura(puntero->sucursal);
    i++;
    puntero=puntero->siguiente;
    break;
    }
}while(i<cant);

 for(i=0;i<5;i++){
    cout<<"La zona "<<i+1 <<" tuvo un total de: "<<zona[i]<<endl;
}
}
float MinimoSucursal(LISTA lista,int *pos){
NODO *puntero=lista->primero;
float minimo=GetFactura(puntero->sucursal);
int i, cant;
cant=ObtenerTamanio(lista);

for(i=1;i<cant;i++){
    if(GetFactura(puntero->sucursal)<minimo){
        *pos=i;
        minimo=GetFactura(puntero->sucursal);
    }
    puntero=puntero->siguiente;
}
return minimo;
}
float MaximoSucursal(LISTA lista,int *pos){
NODO *puntero=lista->primero;
float maximo=GetFactura(puntero->sucursal);
int i, cant;
cant=ObtenerTamanio(lista);
for(i=1;i<cant;i++){
    if(GetFactura(puntero->sucursal)>maximo){
        *pos=i;
        maximo=GetFactura(puntero->sucursal);
    }
    puntero=puntero->siguiente;
}
return maximo;
}
int main(){
SUCURSAL sucursal;
LISTA lista;
lista=CrearLista();
int opcion;
int PosMin=0;
int PosMax=0;
  do{
        opcion=Opcion();
        system("pause");
        system("cls");
        switch(opcion){
        case 0:
        cout<<"Gracias por usar el programa..."<<endl;
        break;
        case 1:
            sucursal=CrearSucursal();
            InsertarFinal(lista,sucursal);
            system("pause");
            system("cls");
            break;
        case 2:
            ListadoTotal(lista);
            system("pause");
        system("cls");
            break;
        case 3: cout<<"El minimo fue de un monto de : "<<MinimoSucursal(lista,&PosMin)<<endl;
                cout<<"En la sucursal: "<<GetId(ObtenerSucursal(lista,PosMin))<<endl;
                cout<<"DATOS:"<<endl;
                MostrarSucursal(ObtenerSucursal(lista,PosMin));
                system("pause");
                system("cls");
            break;
        case 4: cout<<"El maximo fue de un monto de : "<<MaximoSucursal(lista,&PosMax)<<endl;
                cout<<"En la sucursal: "<<GetId(ObtenerSucursal(lista,PosMax))<<endl;
                cout<<"DATOS:"<<endl;
                MostrarSucursal(ObtenerSucursal(lista,PosMax));
                system("pause");
                system("cls");
            break;
        default:
        cout<<"Ingrese bien las opciones.."<<endl;
        system("pause");
        system("cls");
        break;
        }
    }while(opcion!=0);
    return 0;
}
