#include <iostream>
using namespace std;

/**
  PascalCase
  camelCase
  lowercase
  ALLUPPERCASE
  snake_case
*/

class Incrementador{
    private:
        int _valorInicial;
        int _valorIncremento;
        int _cantidadIncrementos;
        int _valor;
        void setValorInicial(int valorInicial);
    public:
        Incrementador();
        Incrementador(int valorInicial, int valorIncremento);
        void setValorIncremento(int valorIncremento);
        int getValorInicial();
        int getValorIncremento();
        int getValorActual();
        void incrementar();
        void reset();
};

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

int main(){
    Incrementador a(20, 10), b(1, 2), c;

    for(int i=0; i<5; i++){
        a.incrementar();
        b.incrementar();
        c.incrementar();
    }

    cout << a.getValorActual() << endl;
    cout << b.getValorActual() << endl;
    cout << c.getValorActual() << endl;

    a.reset();
    b.reset();
    c.reset();

    cout << a.getValorActual() << endl;
    cout << b.getValorActual() << endl;
    cout << c.getValorActual() << endl;


    return 0;
}
