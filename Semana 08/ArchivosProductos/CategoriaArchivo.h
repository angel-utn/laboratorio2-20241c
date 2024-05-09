#pragma once
#include "Categoria.h"

class CategoriaArchivo{
   public:
   bool guardar(Categoria registro);
   bool guardar(int index, Categoria registro);
   Categoria leer(int index);
   
   void leerTodos(Categoria registros[], int cantidad);
   int buscarByID(int id);
   int getCantidadRegistros();
   int getNuevoID();
};