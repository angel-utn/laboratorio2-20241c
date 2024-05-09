#pragma once 
#include "Producto.h"

class ProductoArchivo {
public:
   bool guardar(Producto registro);
   bool guardar(int index, Producto registro);
   Producto leer(int index);
   
   void leerTodos(Producto registros[], int cantidad);
   
   /// devuelva el indice 
   int buscarByID(int id);
   
   // int modificar(int id, Producto reg);
   // int modificar(int idex, Producto reg);
   
   int getCantidadRegistros();
   
   int getNuevoID();
   
private:
   
};

