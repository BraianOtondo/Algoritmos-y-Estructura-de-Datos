#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
