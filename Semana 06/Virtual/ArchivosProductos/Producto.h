#pragma once
#include <string>
#include "Fecha.h"

class Producto {
   public:
      Producto();
      Producto(int id, std::string nombre, float precio, int stock, int stockMinimo, int tipo, Fecha fechaVencimiento, bool eliminado);

      int getID();
      void setID(int id);
      
      std::string getNombre();
      void setNombre(std::string nombre);
      
      float getPrecio();
      void setPrecio(float precio);
      
      int getStock();
      void setStock(int stock);
      
      int getStockMinimo();
      void setStockMinimo(int stockMinimo);
      
      int getTipo();
      void setTipo(int tipo);
      
      bool getEliminado();
      void setEliminado(bool eliminado);
      
      Fecha getFechaVencimiento();
      void setFechaVencimiento(Fecha fechaVencimiento);

   private:
      int _id;
      std::string _nombre;
      float _precio;
      int _stock;
      int _stockMinimo;
      int _tipo;
      bool _eliminado;
      Fecha _fechaVencimiento;
};



