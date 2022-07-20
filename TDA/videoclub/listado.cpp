#include "listado.h"
LISTADO CrearListado(bool tipo,const char nombre[],const char genero[],int anio,int ranking,bool visto, const char usuario[]){
LISTADO listado=new StructListado;
SetTipo(listado,tipo);
SetNombre(listado,nombre);
SetGenero(listado,genero);
SetAnio(listado,anio);
SetRanking(listado,ranking);
SetVisto(listado,visto);
SetUsuario(listado,usuario);
return listado;
}
void SetTipo(LISTADO listado,bool tipo){
listado->tipo=tipo;
}
void SetNombre(LISTADO listado,const char nombre[]){
strcpy(listado->nombre,nombre);
}
void SetGenero(LISTADO listado, const char genero[]){
strcpy(listado->genero,genero);
}
void SetAnio(LISTADO listado,int anio){
listado->anio=anio;
}
void SetRanking(LISTADO listado, int ranking){
listado->ranking=ranking;
}
void SetVisto(LISTADO listado, bool visto){
listado->visto=visto;
}
void SetUsuario(LISTADO listado,const char usuario[]){
strcpy(listado->usuario,usuario);
}
bool GetTipo(LISTADO listado){
return listado->tipo;
}
char *GetNombre(LISTADO listado){
return listado->nombre;
}
char *GetGenero(LISTADO listado){
return listado->genero;
}
int GetAnio(LISTADO listado){
return listado->anio;
}
int GetRanking(LISTADO listado){
return listado->ranking;
}
bool GetVisto(LISTADO listado){
return listado->visto;
}
char *GetUsuario(LISTADO listado){
return listado->usuario;
}

void MostrarListadoCompleto(LISTADO listado[],int n){
for(int i=0;i<n;i++){
cout<<"Usuario: "<<GetUsuario(listado[i])<<endl;
cout<<"Pelicla/Serie: "<<GetNombre(listado[i])<<endl;
cout<<"Genero: "<<GetGenero(listado[i])<<endl;
cout<<"Tipo: "<<TipoPelicula(GetTipo(listado[i]))<<endl;
cout<<"Visto: "<<GetVisto(listado[i])<<endl;
cout<<"Ranking: "<<GetRanking(listado[i])<<endl;
cout<<"Anio: "<<GetAnio(listado[i])<<endl;
cout<<"-------------------------------------------"<<endl;
}
}

void MostrarListado(LISTADO listado){

cout<<"Usuario: "<<GetUsuario(listado)<<endl;
cout<<"Pelicla/Serie: "<<GetNombre(listado)<<endl;
cout<<"Genero: "<<GetGenero(listado)<<endl;
cout<<"Tipo: "<<TipoPelicula(GetTipo(listado))<<endl;
cout<<"Visto: "<<GetVisto(listado)<<endl;
cout<<"Ranking: "<<GetRanking(listado)<<endl;
cout<<"Anio: "<<GetAnio(listado)<<endl;
cout<<"-------------------------------------------"<<endl;


}
void MostrarListadoPeliculas(LISTADO listado[],int n){
for(int i=0;i<n;i++){
        if(GetTipo(listado[i])==true){
         MostrarListado(listado[i]);
        }
}

}

void MostrarListadoSeries(LISTADO listado[],int n){
for(int i=0;i<n;i++){
        if(GetTipo(listado[i])==false){
         MostrarListado(listado[i]);
        }
}

}

const char *TipoPelicula(bool tipo){
if(tipo==true){
return "Pelicula";
}
return "Serie";
}
void OrdenarGeneroAscentente(LISTADO listado[],int n){
int i,j,minimo;
LISTADO aux=nullptr;
for(i=0;i<n;i++){
    minimo=i;
    for(j=i+1;j<n;j++){
        if(strcmp(GetGenero(listado[minimo]),GetGenero(listado[j]))==1){
        minimo=j;
        }
    }
    aux=listado[minimo];
    listado[minimo]=listado[i];
    listado[i]=aux;
}

}

void OrdenarGeneroDescentente(LISTADO listado[],int n){
int i,j,minimo;
LISTADO aux=nullptr;
for(i=0;i<n;i++){
    minimo=i;
    for(j=i+1;j<n;j++){
        if(strcmp(GetGenero(listado[j]),GetGenero(listado[minimo]))==1){
        minimo=j;
        }
    }
    aux=listado[minimo];
    listado[minimo]=listado[i];
    listado[i]=aux;
}

}
void OrdenarAnioAscendente(LISTADO listado[],int n){
int i,j,minimo;
LISTADO aux=nullptr;
    for(i=0;i<n;i++){
        minimo=i;
        for(j=i+1;j<n;j++){
            if(GetAnio(listado[j])<GetAnio(listado[minimo])){
                minimo=j;
            }
        }
        aux=listado[minimo];
        listado[minimo]=listado[i];
        listado[i]=aux;
    }
}
void OrdenarAnioDescendente(LISTADO listado[],int n){
int i,j,minimo;
LISTADO aux=nullptr;
    for(i=0;i<n;i++){
        minimo=i;
        for(j=i+1;j<n;j++){
            if(GetAnio(listado[j])>GetAnio(listado[minimo])){
                minimo=j;
            }
        }
        aux=listado[minimo];
        listado[minimo]=listado[i];
        listado[i]=aux;
    }
}
void OrdenarRankingAscendente(LISTADO listado[],int n){
int i,j,minimo;
LISTADO aux=nullptr;
for(i=0;i<n;i++){
    minimo=i;
    for(j=i+1;j<n;j++){
        if(GetRanking(listado[j])<GetRanking(listado[minimo])){
            minimo=j;
        }
    }
    aux=listado[minimo];
    listado[minimo]=listado[i];
    listado[i]=aux;
}
}
void OrdenarRankingDescendente(LISTADO listado[],int n){
int i,j,minimo;
LISTADO aux=nullptr;
for(i=0;i<n;i++){
    minimo=i;
    for(j=i+1;j<n;j++){
        if(GetRanking(listado[j])>GetRanking(listado[minimo])){
            minimo=j;
        }
    }
    aux=listado[minimo];
    listado[minimo]=listado[i];
    listado[i]=aux;
}
}
