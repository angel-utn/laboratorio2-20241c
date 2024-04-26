#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
#include <string>
using namespace std;
#include "Fecha.h"

class Producto{

private:
    int _id;
    char _nombre[50];
    float _precioxunidad;
    int _stock, _stockMinimo;
    int _tipo;
    FECHA _fechaVencimiento;


public:
    Producto(string nombre, float preciouni, int stock, int smin, int tipo);
    Producto();
    void setID(int id);
    void setFechaVencimiento(FECHA fechaVencimiento);
    void setNombre(string n);
    void setPrecioUnitario(float preciouni);
    void setStock (int stock);
    void setStockMinimo(int smin);
    void setTipo(int tipo);
    string getNombre();
    float getPrecioUnitario();
    int getStock();
    int getStockMinimo();
    int getTipo();
    int getID();
    FECHA getFechaVencimiento();





};

#endif // PRODUCTO_H_INCLUDED
