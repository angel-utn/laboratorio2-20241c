#include <iostream>
#include "Incrementador.h"
using namespace std;

int main(){
    Incrementador objIncrementador(0, 50);
    bool incrementar = true;
    
    
    cout << "Quiere incrementar?" << endl;
    cin >> incrementar;
    
    while(incrementar){
        objIncrementador.incrementar();
        
        cout << "Valor actual: " << objIncrementador.getValor() << endl;
        
        cout << "Quiere incrementar?" << endl;
        cin >> incrementar;    
    }
    
    objIncrementador.incrementar();
    
    cout << "Valor final: " << objIncrementador.getValor() << endl;
    cout << "Cantidad de incrementos: " << objIncrementador.getCantidadIncrementos() << endl;
    
    
    return 0;
}

