#include "Categoria.h"
#include <cstring>

Categoria::Categoria(){
   _idCategoria = 0;
   strcpy(_nombre, "");
}

Categoria::Categoria(int id, std::string nombre){
   _idCategoria = id;
   strcpy(_nombre, nombre.c_str());
}

int Categoria::getIdCategoria(){
   return _idCategoria;
}

std::string Categoria::getNombre(){
   return std::string(_nombre);
}

void Categoria::setIdCategoria(int id){
   _idCategoria = id;
}

void Categoria::setNombre(std::string nombre){
   strcpy(_nombre, nombre.c_str());
}

std::string Categoria::toString(){
   return std::to_string(_idCategoria) + ", " + std::string(_nombre);
}

std::string Categoria::getNombreyID(){
   return getNombre() + " (" + std::to_string(_idCategoria) + ")";
}
