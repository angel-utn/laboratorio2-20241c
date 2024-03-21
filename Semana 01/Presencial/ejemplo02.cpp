#include <iostream>
using namespace std;

int main(){
    const int TAM = 4000000;
    float *vec;
    vec = new float[TAM];
    if (vec == nullptr){
        cout << "No hay memoria";
    }
    else{
        cout << "Hice un vector de " << TAM << " elementos :-)" << endl;
        delete[]vec;
    }

    return 0;
}
