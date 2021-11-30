#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
#include "procedimientos.h"
//STRUCT
struct StructSucursal{
int id;
char direccion[50];
ZONA zona;
float factura;
};
typedef struct StructSucursal *SUCURSAL;
//CONSTRUCTOR
SUCURSAL CrearSucursal();
//DESTRUCTOR
void EliminarSucursal(SUCURSAL sucursal);
// SETS
void setId(SUCURSAL sucursal,int id);
void setDireccion(SUCURSAL sucursal,const char direccion[]);
void setZona(SUCURSAL sucursal,ZONA zona);
void setFactura(SUCURSAL sucursal,float factura);
//GETS
int GetId(SUCURSAL sucursal);
char *GetDireccion(SUCURSAL sucursal);
ZONA GetZona(SUCURSAL sucursal);
float GetFactura(SUCURSAL sucursal);
//

//MOSTRAR
void MostrarSucursal(SUCURSAL sucursal);

void ListadoTotal(SUCURSAL sucursal[],int cant);
float MinimoSucursal(SUCURSAL sucursal[],int cant,int *pos);
float MaximoSucursal(SUCURSAL sucursal[],int cant,int *pos);
#endif // SUCURSAL_H_INCLUDED
