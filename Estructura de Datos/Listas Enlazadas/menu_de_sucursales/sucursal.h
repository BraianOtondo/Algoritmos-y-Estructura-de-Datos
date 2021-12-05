#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
//ENUM PARA EL STRUCT
enum Zona{norte=1,sur=2,este=3,oeste=4,centro=5};
typedef enum Zona ZONA;

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
//MOSTRAR
void MostrarSucursal(SUCURSAL sucursal);
//PROCEDIMIENTOS
ZONA ElegirZona();
//PROCEDIMIENTO PARA GENERAR ID
int GenerarId();

#endif // SUCURSAL_H_INCLUDED
