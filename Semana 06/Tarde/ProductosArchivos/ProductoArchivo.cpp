#include "ProductoArchivo.h"

ProductoArchivo::ProductoArchivo(string nombreArchivo){
    _nombreArchivo = nombreArchivo;
}

bool ProductoArchivo::guardar(Producto producto){
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "ab");
    if (p == nullptr){
        return false;
    }
    bool escribio = fwrite(&producto, sizeof(Producto), 1, p);
    fclose(p);
    return escribio;
}

Producto ProductoArchivo::leer(int nroRegistro){
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "rb");
    if (p == nullptr){
        return Producto();
    }
    Producto aux;
    fseek(p, nroRegistro*sizeof(Producto), SEEK_SET);
    fread(&aux, sizeof(Producto), 1, p);
    fclose(p);
    return aux;
}

int ProductoArchivo::contarRegistros(){
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "rb");
    if (p == nullptr){
        return 0;
    }
    fseek(p,0,SEEK_END);
    int bytes = ftell(p);
    fclose(p);
    return bytes / sizeof(Producto);
}

int ProductoArchivo::buscar(int IDProducto){
    int i, cant = contarRegistros();

    for(i=0; i<cant; i++){
        Producto aux = leer(i);
        if (IDProducto == aux.getID()){
            return i;
        }
    }
    return -1;
}

