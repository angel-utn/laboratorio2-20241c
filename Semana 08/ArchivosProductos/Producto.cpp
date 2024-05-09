#include <cstring>
#include "Producto.h"

Producto::Producto()
: _fechaVencimiento(1,1,1)
{
   _id = 0;
   strcpy(_nombre, "");
   _precio = 0.0f;
   _stock = 0;
   _stockMinimo = 0;
   _tipo = 0;
   _eliminado = 0;
}

Producto::Producto(int id, std::string nombre, float precio, int idcategoria, int stock, int stockMinimo, int tipo, Fecha fechaVencimiento, bool eliminado)
: _fechaVencimiento(1,1,1)
{
   setID(id);
   setNombre(nombre);
   setPrecio(precio);
   setStock(stock);
   setStockMinimo(stockMinimo);
   setTipo(tipo);
   setEliminado(eliminado);
   setFechaVencimiento(fechaVencimiento);
   setIDCategoria(idcategoria);
}

int Producto::getID(){
   return _id;
}

void Producto::setID(int id){
   _id = id;
}

std::string Producto::getNombre(){
   return _nombre;
}

void Producto::setNombre(std::string nombre){
   if(nombre.size() <= 100){
      strcpy(_nombre, nombre.c_str());
   }
   else{
      strcpy(_nombre, "SIN DATOS");
   }
}

float Producto::getPrecio(){
   return _precio;
}
void Producto::setPrecio(float precio){
   _precio = precio;
}

int Producto::getStock(){
   return _stock;
}
void Producto::setStock(int stock){
   _stock = stock;
}

int Producto::getStockMinimo(){
   return _stockMinimo;
}

void Producto::setStockMinimo(int stockMinimo){
   _stockMinimo = stockMinimo;
}

int Producto::getTipo(){
   return _tipo;
}

void Producto::setTipo(int tipo){
   _tipo = tipo;
}

bool Producto::getEliminado(){
   return _eliminado;
}

void Producto::setEliminado(bool eliminado){
   _eliminado = eliminado;
}

Fecha Producto::getFechaVencimiento(){
   return _fechaVencimiento;
}

void Producto::setFechaVencimiento(Fecha fechaVencimiento){
   _fechaVencimiento = fechaVencimiento;
}

void Producto::setIDCategoria(int idcategoria){
   _idCategoria = idcategoria;
}

int Producto::getIDCategoria(){
   return _idCategoria;
}

