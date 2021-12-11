#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include<iostream>
#include<stdbool.h>
using namespace std;
typedef struct Nodo{
int num;
Nodo *siguiente;
}NODO;
typedef struct Cola{
NODO *primero;
NODO *ultimo;
int tam;
}*COLA;
COLA CrearCola();
NODO *CrearNodo(int num);
bool EstaVacia(COLA cola);
void Encolar(COLA cola, int num);
void Desencolar(COLA cola);
void EliminarCola(COLA cola);
void ImprimirCola(COLA cola);

#endif // COLA_H_INCLUDED
