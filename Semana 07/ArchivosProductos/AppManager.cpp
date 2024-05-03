#include <iostream>
#include "AppManager.h"

using namespace std;


void AppManager::menu()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ MENU PRINCIPAL ------- " << endl;
        cout << "1- PRODUCTOS " << endl;
        cout << "2- CATEGORIAS" << endl;
        cout << "3- CONFIGURACION" << endl;
        cout << "-----------------------------" << endl;
        cout << "0- SALIR" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
            _pm.menu();
            system("pause");
            break;

        case 2:
            
            system("pause");
            break;

        case 3:
            system("pause");
            break;
        }

    }
    while(option != 0);

}
