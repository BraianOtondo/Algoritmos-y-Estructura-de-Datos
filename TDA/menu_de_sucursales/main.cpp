#include <iostream>
#include"sucursal.h"
#include"procedimientos.h"
#include <stdlib.h>
using namespace std;

int main(){
SUCURSAL sucursal[25];
int opcion;
int j=0;
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
            sucursal[j]=CrearSucursal();
            j++;
            system("pause");
        system("cls");
            break;
        case 2:
            ListadoTotal(sucursal,j);
            system("pause");
        system("cls");
            break;
        case 3: cout<<"El minimo fue de un monto de : "<<MinimoSucursal(sucursal,j,&PosMin)<<endl;
                cout<<"En la sucursal: "<<GetId(sucursal[PosMin])<<endl;
                cout<<"DATOS:"<<endl;
                MostrarSucursal(sucursal[PosMin]);
                system("pause");
                system("cls");
            break;
        case 4: cout<<"El maximo fue de un monto de : "<<MaximoSucursal(sucursal,j,&PosMax)<<endl;
                cout<<"En la sucursal: "<<GetId(sucursal[PosMax])<<endl;
                cout<<"DATOS:"<<endl;
                MostrarSucursal(sucursal[PosMax]);
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

for(int i=0;i<j;i++){
    EliminarSucursal(sucursal[i]);
}
    return 0;
}
