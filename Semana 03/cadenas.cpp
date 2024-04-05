#include <iostream>
using namespace std;

int main(){
    int numero;
    string nombre;
   
    cout << "Ingrese numero: ";
    cin >> numero;
    cin.ignore();
    
    cout << "Ingrese nombre: ";
    getline(cin, nombre);    
   
    cout << "Nombre: " << nombre << endl;
    cout << "Numero: " << numero << endl;
    
    
    return 0;
}
