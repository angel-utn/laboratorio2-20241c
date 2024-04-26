#ifndef PRODUCTOARCHIVO_H_INCLUDED
#define PRODUCTOARCHIVO_H_INCLUDED
#include <string>
using namespace std;
#include "Producto.h"

class ProductoArchivo{
    public:
        ProductoArchivo(string nombreArchivo);
        bool guardar(Producto producto);
        Producto leer(int nroRegistro);
        int contarRegistros();
        int buscar(int IDProducto);

    private:
        string _nombreArchivo;

};

#endif // PRODUCTOARCHIVO_H_INCLUDED
