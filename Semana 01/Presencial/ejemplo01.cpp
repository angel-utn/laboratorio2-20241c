#include <iostream>
using namespace std;

void por_valor(int e){
    cout << "E: " << e << endl;
    e = 100;
    cout << "E: " << e << endl;
}
void por_direccion(int *p){
    cout << "Direccion de edad en por_direccion: " << p << endl;
    cout << "Direccion de p en por_direccion: " << &p << endl;

    cout << "P: " << *p << endl;
    *p = 200;
    cout << "P: " << *p << endl;
}
void por_referencia(int &age){
    cout << "Direccion de edad en por_referencia: " << &age << endl;
    cout << "AGE: " << age << endl;
    age = 300;
    cout << "AGE: " << age << endl;
}


int main(){
    int edad = 21;

    cout << "Direccion de edad: " << &edad << endl << endl;

    cout << "EDAD: " << edad << endl;
    por_valor(edad);
    cout << "EDAD: " << edad << endl;

    por_direccion(&edad);
    cout << "EDAD: " << edad << endl;

    por_referencia(edad);
    cout << "EDAD: " << edad << endl;

    return 0;
}
