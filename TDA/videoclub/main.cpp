#include "listado.h"
#include <iostream>
#include<stdbool.h>
using namespace std;

int main(){
LISTADO lista[5];
lista[0]=CrearListado(false,"Stranger Things","Adolescente",2023,2,true,"BraianOtondo");
lista[1]=CrearListado(false,"Loki","Marvel",2021,5,true,"BraianOtondo");
lista[2]=CrearListado(true,"Thor Love And Thunder","Barbaro",2022,2,true,"BraianOtondo");
lista[3]=CrearListado(true,"Batman","Accion",2021,6,true,"BraianOtondo");
lista[4]=CrearListado(false,"MoonKnight","Psicotico",2020,1,true,"BraianOtondo");
MostrarListadoCompleto(lista,5);
system("pause");
system("cls");
cout<<"POR ANIO: "<<endl;
OrdenarAnioAscendente(lista,5);
MostrarListadoPeliculas(lista,5);
system("pause");
system("cls");
cout<<"POR GENERO: "<<endl;
OrdenarGeneroAscentente(lista,5);
MostrarListadoPeliculas(lista,5);
cout<<"POR RANKING"<<endl;
OrdenarRankingAscendente(lista,5);
MostrarListadoPeliculas(lista,5);
system("pause");
system("cls");
cout<<"SERIES"<<endl;
cout<<"POR ANIO: "<<endl;
OrdenarAnioAscendente(lista,5);
MostrarListadoSeries(lista,5);
cout<<"POR GENERO: "<<endl;
OrdenarGeneroAscentente(lista,5);
MostrarListadoSeries(lista,5);
cout<<"POR RANKING"<<endl;
OrdenarRankingAscendente(lista,5);
MostrarListadoSeries(lista,5);
system("pause");
system("cls");
cout<<"POR ANIO DESCENDENTE: "<<endl;
OrdenarAnioDescendente(lista,5);
MostrarListadoCompleto(lista,5);
cout<<"POR GENERO DESCENTDENTE: "<<endl;
OrdenarGeneroDescentente(lista,5);
MostrarListadoCompleto(lista,5);
cout<<"POR RANKING"<<endl;
OrdenarRankingDescendente(lista,5);
MostrarListadoCompleto(lista,5);
    return 0;
}
