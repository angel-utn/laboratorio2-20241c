#include <iostream>
using namespace std;
#include <cstdlib>

#include "ProductoManager.h"

Producto ProductoManager::cargar(){
    Producto aux;
    string nombre;
    float precio;
    int stockmin, stock, tipo, id;

    cout << "ingrese el ID: ";
    cin >> id;
    aux.setID(id);

    fflush(stdin);
    cout << "ingrese el nombre del producto ";
    getline(cin, nombre);
    aux.setNombre(nombre);
    cout << endl;
    cout << "ingrese el precio del producto ";
    cin >> precio;
    aux.setPrecioUnitario(precio);

    cout << endl;
    cout << "ingrese el stock ";
    cin >> stock;
    aux.setStock(stock);

    cout << endl;
    cout << "ingrese el stock minimo para avisar por msj";
    cin >> stockmin;
    aux.setStockMinimo(stockmin);

    cout << endl;
    cout << "ingrese el tipo 1 o 2 ";
    cin >> tipo;
    aux.setTipo(tipo);

    return aux;
}

void ProductoManager::mostrar(Producto producto){
    cout << "ID: " << producto.getID() << endl;
    cout << "NOMBRE: " << producto.getNombre() << endl;
    cout << "STOCK : " << producto.getStock() << endl;
    cout << "FECHA VENCIMIENTO: " << producto.getFechaVencimiento().toString() << endl;
}

void ProductoManager::listarPorID(){
    int IDProducto;
    cout << "ID de Producto a buscar: ";
    cin >> IDProducto;

    int pos = _archivo.buscar(IDProducto);
    if (pos >= 0){
        Producto aux = _archivo.leer(pos);
        mostrar(aux);
    }
    else{
        cout << "No existe tal ID producto." << endl;
    }

}

void ProductoManager::listarTodos(){
    for(int i=0; i<_archivo.contarRegistros(); i++){
       mostrar(_archivo.leer(i));
    }
}

void ProductoManager::menu(){

    int opcion, aux;
    while (true){
        system("cls");
        cout << "MENU PRODUCTOS" << endl;
        cout << "----------------" << endl;
        cout << "1) NUEVO PRODUCTO" << endl;
        cout << "2) LISTAR PRODUCTOS" << endl;
        cout << "3) LISTAR PRODUCTO x ID" << endl;
        cout << "---------------------------" << endl;
        cout << "0) SALIR" << endl;

        cin >> opcion;

        switch(opcion){
            case 1:
                {
                    Producto aux = cargar();
                    _archivo.guardar(aux);
                }
                break;
            case 2:
                {
                   listarTodos();
                }
                break;
            case 3:
                {
                   listarPorID();
                }
                break;
            case 99:
                cout << _archivo.contarRegistros();
                break;
            case 0:
                return;
                break;
            default:
                cout << "OPCION INCORRECTA" << endl;
            break;
        }

        system("pause");

    }

}
