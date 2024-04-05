#include <iostream>
using namespace std;

void incrementar(int &incremento, int &cantidad);

int main(){
    int incrementador = 0;
    bool quieroIncrementar = true;
    int cantidad =0 ;
    
    cout << "Quiere incrementar?" << endl;
    cin >> quieroIncrementar;
    
    while(quieroIncrementar){
        incrementar(incrementador, cantidad);
        
        cout << "Valor actual: " << incrementador << endl;
        
        cout << "Quiere incrementar?" << endl;
        cin >> quieroIncrementar;    
    }
   
    incrementar(incrementador, cantidad);
    
    cantidad = 0;
    
    cout << "Valor final: " << incrementador << endl;
    cout << "Cantidad de incrementos: " << cantidad << endl;
    
    
    return 0;
}

void incrementar(int &incremento, int &cantidad){
    incremento +=50;
    cantidad++;
}

