#include <iostream>
using namespace std;
#include "Incrementador.h"


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
