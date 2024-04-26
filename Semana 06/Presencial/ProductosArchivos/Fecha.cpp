#include <iostream>
#include <cstring>
#include <string>
#include "fecha.h"

using namespace std;

FECHA::FECHA(int dia, int mes, int anio){
if (dia<=31 && dia>0 && mes<=12 && mes>0 && anio<10000 && anio>0){
    _dia = dia;
    _mes = mes;
    _anio = anio;
}
else {
    _dia = 1;
    _mes = 1;
    _anio = 2023;
}
}

FECHA::FECHA(){
_dia = 1;
_mes = 1;
_anio = 2023;
}

void FECHA::setAgregarDia(){
switch (_mes){
    case 1:
        if (_dia == 31){
        _dia +=1;
        _dia = 1;
        _mes = 2;
        _anio = _anio;
        }
        else{
            _dia+=1;
        }
    break;
    case 2:
            if (_mes == 2 && _dia <= 29){
        if(_anio % 4 == 0 && _anio % 100 == 0 && _anio % 400 == 0){
            _dia +=1;
            _dia = 1;
            _mes = 3;
            _anio = _anio;
            }
        }
        else{
            if(_dia==28){
                _dia+=1;
                _dia = 1;
                _mes = 3;
                _anio = _anio;
            }
            else{
                _dia+=1;
            }
        }
    case 3:
        if(_dia==31){
            _dia+=1;
            _dia = 1;
            _mes = 4;
            _anio = _anio;
        }
        else{
            _dia+=1;
        }
        break;
    case 4:
        if (_dia == 30 ){
            _dia+=1;
            _dia = 1;
            _mes = 5;
            _anio = _anio;
        }
        else{
            _dia +=1;
        }
    break;
    case 5:
        if (_dia == 31){
            _dia +=1;
            _dia = 1;
            _mes = 1;
            _anio = _anio;
        }
        else{
            _dia +=1;
        }
        break;
    case 6:
        if (_dia == 30){
            _dia+=1;
            _dia=1;
            _mes=7;
            _anio =_anio;
        }
        else{
            _dia +=1;
        }
        break;
    case 7:
        if(_dia==31){
            _dia+=1;
            _dia=1;
            _mes=8;
            _anio= _anio;
        }
        else{
            _dia+=1;
        }
    break;
    case 8:
        if(_dia==31){
            _dia+=1;
            _dia=1;
            _mes=9;
            _anio = _anio;
        }
        else{
            _dia+=1;
        }
        break;
    case 9:
        if(_dia == 30){
            _dia+=1;
            _dia=1;
            _mes=10;
            _anio= _anio;
        }
        else{
            _dia+=1;
        }
        break;
    case 10:
        if(_dia== 31){
            _dia+=1;
            _dia=1;
            _mes=11;
            _anio= _anio;
        }
        else{
            _dia+=1;
        }
        break;
    case 11:
        if (_dia==30){
            _dia+=1;
            _dia=1;
            _mes=12;
            _anio= _anio;
        }
        else{
            _dia+=1;
        }
        break;
    case 12:
        if(_dia==31){
            _dia+=1;
            _dia=1;
            _mes=1;
            _anio= _anio+1;
        }
        else{
            _dia+=1;
        }
        break;
}

}

void FECHA::setRestarDia(){
switch (_mes){
    case 1:
        if (_dia ==1){
        _dia -=1;
        _dia = 31;
        _mes = 12;
        _anio = _anio-1;
        }
        else{
            _dia-=1;
        }
    break;
    case 2:
            if(_dia==1){
                _dia-=1;
                _dia = 31;
                _mes = 1;
                _anio = _anio;
            }
            else{
                _dia-=1;
            }

    case 3:
        if(_dia==1 && _anio % 4 == 0 && _anio % 100 == 0 && _anio % 400 == 0){
            _dia-=1;
            _dia = 29;
            _mes = 2;
            _anio = _anio;
        }
        else{
            if (_dia == 1){
            _dia-=1;
            _dia = 28;
            _mes = 2;
            _anio = _anio;
            }
        else{
            _dia-=1;
        }
        }
        break;
    case 4:
        if (_dia==1){
            _dia-=1;
            _dia =31;
            _mes = 3;
            _anio = _anio;
        }
        else{
            _dia -=1;
        }
    break;
    case 5:
        if (_dia == 1){
            _dia -=1;
            _dia = 30;
            _mes = 4;
            _anio = _anio;
        }
        else{
            _dia -=1;
        }
        break;
    case 6:
        if (_dia == 1){
            _dia-=1;
            _dia=31;
            _mes=5;
            _anio = _anio;
        }
        else{
            _dia -=1;
        }
        break;
    case 7:
        if(_dia==1){
            _dia-=1;
            _dia=30;
            _mes=6;
            _anio= _anio;
        }
        else{
            _dia-=1;
        }
    break;
    case 8:
        if(_dia==31){
            _dia-=1;
            _dia=31;
            _mes=7;
            _anio = _anio;
        }
        else{
            _dia-=1;
        }
        break;
    case 9:
        if(_dia==1){
            _dia-=1;
            _dia=31;
            _mes=8;
            _anio= _anio;
        }
        else{
            _dia-=1;
        }
        break;
    case 10:
        if(_dia==1){
            _dia-=1;
            _dia=30;
            _mes=9;
            _anio= _anio;
        }
        else{
            _dia-=1;
        }
        break;
    case 11:
        if (_dia==1){
            _dia-=1;
            _dia=31;
            _mes=10;
            _anio= _anio;
        }
        else{
            _dia-=1;
        }
        break;
    case 12:
        if(_dia==1){
            _dia-=1;
            _dia=30;
            _mes=11;
            _anio=_anio;
        }
        else{
            _dia-=1;
        }
        break;
}

}

void FECHA::AgregarDias(int cantidad){
if (cantidad != 0) {
        while (cantidad != 0) {
            if (cantidad > 0) {

                _dia++;

                if (_dia > diasEnMes(_mes, _anio)) {

                    _mes++;
                    // Verificar si se ha excedido el límite de meses en el año actual
                    if (_mes > 12) {
                        // Avanzar al siguiente año
                        _anio++;
                        // Reiniciar el mes
                        _mes = 1;
                    }
                    // Reiniciar el día
                    _dia = 1;
                }
                // Restar un día de la cantidad total
                cantidad--;
            } else {
                // Retroceder al día anterior
                _dia--;
                // Verificar si se ha excedido el límite inferior de días en el mes actual
                if (_dia < 1) {
                    // Retroceder al mes anterior
                    _mes--;
                    // Verificar si se ha excedido el límite inferior de meses en el año actual
                    if (_mes < 1) {
                        // Retroceder al año anterior
                        _anio--;
                        // Establecer el mes a diciembre del año anterior
                        _mes = 12;
                    }
                    // Establecer el día al último día del mes anterior
                    _dia = diasEnMes(_mes, _anio);
                }
                // Suma un día a la cantidad total
                cantidad++;
            }
        }
    }
}

int FECHA::diasEnMes(int mes, int anio) {

    int diasPorMes[] = {31/*enero*/, (esBisiesto(anio) ? 29 : 28)/*pregunta para febrero por si es bisisesto*/, 31/*marzo*/, 30/*abril*/, 31, 30, 31, 31, 30, 31, 30, 31}; ///metodo de concatenacion, aparece 30, 31, 30 y asi porque se añadieron los dias segun el mes, dsp de la concatenacion aparece 30 por ser ele 31 de marzo y luego 30 por el 30 de abril
    return diasPorMes[mes - 1]; // Devolver la cantidad de días en el mes indicado
}

bool FECHA::esBisiesto(int anio) {
    return (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0));
}

int FECHA::getAgregarDias(){
if (_dia < 0 || _dia > 31){

}

}

void FECHA::setDia(int d){
if (d>0 && d<=31){
    _dia = d;
}
else{
    FECHA();
}
}

void FECHA::setMes(int m){
if (m>0 && m<31){
    _mes=m;
}
else{
    FECHA();
}
}

void FECHA::setAnio(int a){
if(a>=1900 && a<= 4000){
    _anio=a;
}
else{
FECHA();
}
}

int FECHA::getRestarDia(){
cout << _dia << "/"<< _mes << "/" << _anio;
}

int FECHA::getAgregarDia(){
cout << _dia << "/" << _mes << "/" << _anio;
}

int FECHA::getDia(){
 return _dia;
}

int FECHA::getMes(){
 return _mes;
}

int FECHA::getAnio(){
 return _anio;
}

std::string FECHA::toString(){
return to_string(_dia) + "/" + to_string (_mes) + "/" + to_string (_anio);
}
