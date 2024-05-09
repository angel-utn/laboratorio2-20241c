#pragma once
#include "Categoria.h"
#include "CategoriaArchivo.h"

class CategoriasManager{
    public:
   void menu();
private:
   void agregarCategoria();
   void listarCategorias();
   Categoria crearCategoria();
   void volverCargarCategoria(Categoria &registro);
   void mostrarCategoria(Categoria registro);
   void modificarCategoria();
   void eliminarCategoria();
   CategoriaArchivo _categoriasArchivo;
};