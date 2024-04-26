#include <iostream>
#include <cstring>
#include "Producto.h"

using namespace std;

Producto::Producto(){
    strcpy(_nombre, "");
    _precioxunidad = 0;
    _stock = 0;
    _stockMinimo = 0;
    _tipo = 0;
    _fechaVencimiento = FECHA();
}

Producto::Producto(string nombre, float preciouni, int stock, int smin, int tipo)
{
    setNombre(nombre);
    setPrecioUnitario(preciouni);
    setStock(stock);
    setStockMinimo(smin);
}

void  Producto::setStock(int stock)
{
    if (stock < 0)
    {
        _stock = stock;
    }
    else
    {
        _stock = stock;
    }
}

void Producto::setNombre(string n)
{
    strcpy(_nombre, n.c_str());
}

int Producto::getStock(){
    return _stock;
}

string Producto::getNombre(){
    string nombre = _nombre;
    return nombre;
}

void Producto::setPrecioUnitario(float preciounidad)
{
    if (preciounidad < 0)
    {
        _precioxunidad = 0;
    }
    else
    {
        _precioxunidad = preciounidad;
    }

}

void Producto::setStockMinimo(int smin)
{
    if (smin < 0)
    {
        _stockMinimo = 0;
    }
    else
    {
        _stockMinimo = smin;
    }
}

int Producto::getTipo()
{
    return _tipo;
}
void Producto::setTipo(int tipo)
{
    _tipo = tipo;
}
int Producto::getID(){
    return _id;
}
void Producto::setID(int ID){
    _id = ID;
}
FECHA Producto::getFechaVencimiento(){
    return _fechaVencimiento;
}
void Producto::setFechaVencimiento(FECHA fechaVencimiento){
    _fechaVencimiento = fechaVencimiento;
}



/*Producto Producto::cargarProductos()
{



}
   */
