#include <iostream>
using namespace std;

int main(){
    int incrementador = 0;
    bool incrementar = true;
    int cantidad = 0;
    
    
    cout << "Quiere incrementar?" << endl;
    cin >> incrementar;
    
    while(incrementar){
        incrementador+=50;
		cantidad++;
        
        cout << "Valor actual: " << incrementador << endl;
        
        cout << "Quiere incrementar?" << endl;
        cin >> incrementar;    
    }
    incrementador+=22;
    cantidad++;
    
    cout << "Valor final: " << incrementador << endl;
    cout << "Cantidad de incrementos: " << cantidad << endl;
    
    
    return 0;
}

