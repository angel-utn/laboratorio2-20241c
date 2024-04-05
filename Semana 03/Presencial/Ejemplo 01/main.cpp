/**
  Link: https://docs.google.com/document/d/1fmJckI2XvTP78vz9GSKs1TQ_1kA0JIttUAEfYriIM-k/edit
*/
#include <iostream>
using namespace std;

void incrementar(int &incrementador, int &incrementos, int valorIncremento);

int main(){
    int incrementador = 0, incrementos = 0, valorInicial = 0, valorIncremento = 50;

    incrementador = valorInicial;

    incrementar(incrementador, incrementos, valorIncremento);

    cout << "Incrementador: " << incrementador << endl;
    cout << "Cant Incrementos: " << incrementos << endl;

    incrementar(incrementador, incrementos, valorIncremento);

    cout << "Incrementador: " << incrementador << endl;
    cout << "Cant Incrementos: " << incrementos << endl;

    return 0;
}

void incrementar(int &incrementador, int &incrementos, int valorIncremento){
    incrementador += valorIncremento;
    incrementos++;
}
