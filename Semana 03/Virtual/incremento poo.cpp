#include <iostream>
using namespace std;


/***
    Definicion
    Caracteristicas - Propiedades
    Acciones        - Metodos
    
    Estado          - Valor (Memoria)
    Comportamiento  - 
    Identidad       - Nombre

*/


/***
private: es cuando quiero que SOLO dentro de la clase tenga acceso

protected: es cuando quiero que SOLO dentro de la clase y sus hijos (herencia) tenga acceso

public: es cuando quiero que cualquiera tenga acceso

*/

class Incrementador{
private:
    // Propiedades
    int _valor;
    int _valorIncremento;    
    int _cantidadIncrementos;
    
    void setValorIncremento(int valorIncremento){
        _valorIncremento = valorIncremento;
        
        if(_valorIncremento < 0){
            _valorIncremento = 0;
        }
    }
public:

    Incrementador(){
        _valor = 0;
        _valorIncremento = 1;
        _cantidadIncrementos = 0;
    }
    
    Incrementador(int inicial, int incremento){
        _valor = inicial;
        _cantidadIncrementos = 0;
        setValorIncremento(incremento);
    }
    
    // Metodos
    void incrementar(){
        _valor += _valorIncremento;
        _cantidadIncrementos++;   
    }
    
    /// getters y setters
    int getValor(){
        return _valor;
    }
    
    ~Incrementador(){
        cout << "Me destruyo..." << endl;
    }
};


int main(){

    Incrementador inc(0, 5); // crea el objeto -> instanciando un objeto -> un objeto es la instancia de una clase
    
    inc.incrementar();
    cout << "Valor actual: " << inc.getValor() << endl;
    
    inc.incrementar();
    
    cout << "Valor actual: " << inc.getValor() << endl;
    
    inc.incrementar();
    cout << "Valor actual: " << inc.getValor() << endl;
    
    return 0;
}

