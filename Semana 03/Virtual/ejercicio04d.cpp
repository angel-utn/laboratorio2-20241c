#include <iostream>

using namespace std;
/***

Hacer una funci�n llamada Delta que reciba un vector de enteros llamado Alfa y su tama�o y un vector de enteros
llamado Beta y su tama�o.
El programa debe generar un vector de enteros llamado Gamma (de manera din�mica) y almacenar secuencialmente
en �l los elementos que se encuentran en ambos vectores (los que est�n en Alfa y en Beta).

Luego, mostrar el vector Gamma, si es que contiene datos, con las siguientes variantes:
A) Mostrarlo dentro de la funci�n Delta
B) Mostrarlo desde main haciendo uso del vector generado din�micamente en la funci�n Delta.
C) �Existe s�lo una manera de resolver el punto B?

*/

void Delta(int Alfa[], int tamAlfa, int Beta[], int tamBeta, int Gamma[], int tamGamma);


int main()
{
    int v1[3]{5,6,9}, v2[4]{9,10,15,11};
    int tamGama = 7;
    int *Gamma = new int[tamGama];

    if(Gamma == nullptr)
    {
        cout << "NO se pudo pedir memoria..."<<endl;
        exit(-200);
    }

    
    Delta(v1, 3, v2, 4, Gamma, tamGama);


    /// PUNTO A
    for(int i=0; i<tamGama; i++){
        cout << "Gamma["<<i<<"]: " << Gamma[i] << endl;
    }
    
    delete [] Gamma;
    
    return 0;
}

void Delta(int Alfa[], int tamAlfa, int Beta[], int tamBeta, int Gamma[], int tamGamma)
{
    int iGamma = 0;
    
    for(int i=0; i<tamAlfa; i++){
        Gamma[iGamma++] = Alfa[i];
    }
    
    for(int i=0; i<tamBeta; i++){
        Gamma[iGamma++] = Beta[i];
    }
}
















