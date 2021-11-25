#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "sucursal.h"
using namespace std;

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
int main(){
cout<<GenerarId()<<endl;

return 0;
}
