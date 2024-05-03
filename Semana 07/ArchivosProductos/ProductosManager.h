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
   void volverCargarProducto(Producto &registro);
   void mostrarProducto(Producto registro);
   void modificarProducto();
   void eliminarProducto();
   ProductoArchivo _productosArchivo;
};

