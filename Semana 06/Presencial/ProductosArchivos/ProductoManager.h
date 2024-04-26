#ifndef PRODUCTOMANAGER_H_INCLUDED
#define PRODUCTOMANAGER_H_INCLUDED
#include "ProductoArchivo.h"
#include "Producto.h"

class ProductoManager{

    private:
        ProductoArchivo _archivo = ProductoArchivo("productos.dat");

        void listarTodos();
        void listarPorID();

    public:
        void menu();
        Producto cargar();
        void mostrar(Producto producto);

};

#endif // PRODUCTOMANAGER_H_INCLUDED
