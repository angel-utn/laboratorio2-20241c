#include "Incrementador.h"

Incrementador::Incrementador(int valorInicial, int valorIncremento){
    setValorInicial(valorInicial);
    _valorIncremento = valorIncremento;
    _cantidadIncrementos = 0;
}

Incrementador::Incrementador(){
    setValorInicial(0);
    _valorIncremento = 1;
    _cantidadIncrementos = 0;
}

void Incrementador::setValorInicial(int valorInicial){
  _valorInicial = valorInicial;
  _valor = _valorInicial;
}

void Incrementador::setValorIncremento(int valorIncremento){
    if (valorIncremento < 0){
        _valorIncremento = 0;
    }
    else{
        _valorIncremento = valorIncremento;
    }
}

int Incrementador::getValorIncremento(){
    return _valorIncremento;
}

int Incrementador::getValorInicial(){
    return _valorInicial;
}

int Incrementador::getValorActual(){
    return _valor;
}

void Incrementador::incrementar(){
    _valor += _valorIncremento;
    _cantidadIncrementos++;
}

void Incrementador::reset(){
    _valor = _valorInicial;
    _cantidadIncrementos = 0;
}
