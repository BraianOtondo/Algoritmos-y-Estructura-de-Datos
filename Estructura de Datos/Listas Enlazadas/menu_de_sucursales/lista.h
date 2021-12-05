#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "sucursal.h"
typedef struct Nodo{
SUCURSAL sucursal;
struct Nodo* siguiente;
}NODO;
struct Lista{
NODO *primero;
int tam;
};
typedef struct Lista *LISTA;
LISTA CrearLista();
Nodo *CrearNodo(SUCURSAL sucursal);

void InsertarInicio(LISTA lista,SUCURSAL sucursal);

void EliminarInicio(LISTA lista);

void EliminarNodo(Nodo *nodo);
void obtenerElemento(LISTA lista,SUCURSAL *sucursal, int pos);
bool EstaVacia(LISTA lista);
void InsertarFinal(LISTA lista, SUCURSAL sucursal);
void Insertar(LISTA lista,int dato,int pos);
void LiberarLista(LISTA lista);
void EliminarUltimo(LISTA lista);
void Eliminar(LISTA lista, int pos);
void ImprimirLista(LISTA lista);
int ObtenerTamanio(LISTA lista);
void INsertar(LISTA lista,int dato,int pos);
void CopiarLista(LISTA lista1,LISTA lista2);
SUCURSAL ObtenerSucursal(LISTA lista, int pos);
#endif // LISTA_H_INCLUDED
