#pragma once 
#include "Producto.h"
#include "ProductoArchivo.h"

class ProductosManager {
public:
   void menu();
private:
   void agregarProducto();
   void listarProductos();
   Producto crearProducto();
   void mostrarProducto(Producto registro);
   
   ProductoArchivo _productosArchivo;
};

