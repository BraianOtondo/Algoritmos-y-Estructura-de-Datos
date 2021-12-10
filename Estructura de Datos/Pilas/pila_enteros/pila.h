#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include<iostream>
#include<stdbool.h>
using namespace std;
struct Nodo{
int num;
Nodo *siguiente;
};
typedef Nodo NODO;
typedef struct Pila{
NODO *cima;
int tam;
}*PILA;
NODO *CrearNodo(int num);
PILA CrearPila();

void Push(PILA pila,int num);
void Pop(PILA pila);
void EliminarPila(PILA pila);
void MostrarPila(PILA pila);
bool EstaVacia(PILA pila);

#endif // PILA_H_INCLUDED
