#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
typedef struct Nodo{
int num;
struct Nodo* siguiente;
}NODO;
typedef struct Lista{
Nodo *cabeza;
int tam;
}*LISTA;
LISTA CrearLista();
NODO *CrearNodo(int num);
// INSERTAR
void InsertarInicio(LISTA lista, int num);
void InsertarFinal(LISTA lista, int num);
void Insertar(LISTA lista,int num,int pos);
//ELIMINAR
void EliminarNodo(NODO *nodo);
void EliminarInicio(LISTA lista);
void Eliminar(LISTA lista, int pos);
void EliminarUltimo(LISTA lista);
void EliminarLista(LISTA lista);


int ObtenerTamanio(LISTA lista);
void ImprimirLista(LISTA lista);
#endif // LISTA_H_INCLUDED
