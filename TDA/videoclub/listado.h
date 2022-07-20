#ifndef LISTADO_H_INCLUDED
#define LISTADO_H_INCLUDED

#include<string.h>
#include <iostream>
using namespace std;

struct StructListado{
bool tipo; //pelicula o serie
char nombre[30];
char genero[30];
int anio;
int ranking;
bool visto;
char usuario[30];
};
typedef struct StructListado *LISTADO;
LISTADO CrearListado(bool tipo,const char nombre[],const char genero[],int anio,int ranking,bool visto, const char usuario[]);
void EliminarListado(LISTADO listado);
void SetTipo(LISTADO listado,bool tipo);
void SetNombre(LISTADO listado,const char nombre[]);
void SetGenero(LISTADO listado, const char genero[]);
void SetAnio(LISTADO listado,int anio);
void SetRanking(LISTADO listado, int ranking);
void SetVisto(LISTADO listado, bool visto);
void SetUsuario(LISTADO listado,const char usuario[]);
bool GetTipo(LISTADO listado);
char *GetNombre(LISTADO listado);
char *GetGenero(LISTADO listado);
int GetAnio(LISTADO listado);
int GetRanking(LISTADO listado);
bool GetVisto(LISTADO listado);
char *GetUsuario(LISTADO listado);

const char *TipoPelicula(bool tipo);
void OrdenarGeneroAscentente(LISTADO listado[],int n);
void OrdenarAnioAscendente(LISTADO listado[],int n);
void OrdenarRankingAscendente(LISTADO listado[],int n);
void OrdenarRankingDescendente(LISTADO listado[],int n);
void OrdenarAnioDescendente(LISTADO listado[],int n);
void OrdenarGeneroDescentente(LISTADO listado[],int n);

void MostrarListado(LISTADO listado);
void MostrarListadoCompleto(LISTADO listado[],int n);

void MostrarListadoPeliculas(LISTADO listado[],int n);
void MostrarListadoSeries(LISTADO listado[],int n);
#endif // LISTADO_H_INCLUDED
