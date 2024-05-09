#pragma once
#include "Producto.h"
#include "ProductoArchivo.h"
#include "CategoriaArchivo.h"

class ProductosManager {
public:
   void menu();
private:
   void agregarProducto();
   void listarProductos(bool ordenadoPorPrecio = false);
   Producto crearProducto();
   void volverCargarProducto(Producto &registro);
   void mostrarProducto(Producto registro);
   void modificarProducto();
   void eliminarProducto();
   void ordenarProductosPorPrecio(Producto *productos, int cantidad);

   ProductoArchivo _productosArchivo;
   CategoriaArchivo _categoriaArchivo;
};

/**

   Listar todas los productos que pertenezcan a un categoria a partir de su ID
   Listar todas los productos a partir de un nombre
   Listar cantidad de productos por categoría
   Listar producto más caro por categoría

*/
