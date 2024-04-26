#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <string>
#include <cstring>
using namespace std;
class FECHA{

private:
    int _dia;
    int _mes;
    int _anio;
    int AgregarDia;
    int RestarDia;
public:
    FECHA();
    FECHA(int diaD, int mesD, int anioD);
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
    int getDia();
    int getMes();
    int getAnio();
    int getAgregarDia();
    int getRestarDia();
    int getAgregarDias();
    void AgregarDias(int cantidad);
    int diasEnMes(int mes, int anio);
    void setAgregarDia();
    void setRestarDia();
    bool esBisiesto(int anio); /// funcion que verifica si el año es bisiesto
    std::string toString();



};

#endif // FECHA_H_INCLUDED
