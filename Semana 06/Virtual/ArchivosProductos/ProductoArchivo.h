#pragma once 
#include "Producto.h"

class ProductoArchivo {
public:
   bool guardar(Producto registro);
   Producto leer(int index);
   int getCantidadRegistros();
   
private:
   
};

