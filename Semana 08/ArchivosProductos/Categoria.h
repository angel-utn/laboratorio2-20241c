#include <string>
#pragma once
class Categoria{
   private:
      int _idCategoria;
      char _nombre[30];

   public:
      Categoria();
      Categoria(int id, std::string nombre);
      int getIdCategoria();
      std::string getNombre();
      void setIdCategoria(int id);
      void setNombre(std::string nombre);
      std::string toString();
      std::string getNombreyID();
};
