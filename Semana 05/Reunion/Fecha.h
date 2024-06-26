#ifndef FECHA_H
#define FECHA_H
#include <string>

class Fecha
{
    public:
        Fecha(int dia, int mes, int anio);
        Fecha();
        int getDia();
        int getMes();
        int getAnio();
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        void mostrar();
        std::string toString();
    private:
        int _dia, _mes, _anio;
};

#endif // FECHA_H
