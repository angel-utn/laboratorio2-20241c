#pragma once

class Incrementador{
private:
    // Propiedades
    int _valor;
    int _valorIncremento;    
    int _cantidadIncrementos;

    void setValorIncremento(int valorIncremento);
public:
    Incrementador();
    Incrementador(int inicial, int incremento);
    
    void incrementar();
    int getValor();
    int getCantidadIncrementos();
    
    ~Incrementador();
};
