#include <iostream>
#include "ProductosManager.h"
using namespace std;

Producto ProductosManager::crearProducto(){
   int id;
   string nombre;
   float precio;
   
   cout << "Ingrese ID: ";
   cin >> id;
   
   cin.ignore();
   cout <<"Ingrese nombre: ";
   getline(cin, nombre);
   
   cout<< "Ingrese precio: ";
   cin >> precio;
   
   return Producto(id, nombre, precio, 10, 5, 1, Fecha(4,4,2029), false);
}

void ProductosManager::mostrarProducto(Producto reg){
   cout << "ID: " << reg.getID() << endl;
   cout << "Nombre: " << reg.getNombre() << endl;
   cout << "Precio: " << reg.getPrecio() << endl;
   cout << "Stock: " << reg.getStock() << endl;
   cout << "Stock Minimo: " << reg.getStockMinimo() << endl;
   cout << "Fecha vencimiento: " << reg.getFechaVencimiento().toString() << endl;

}

void ProductosManager::agregarProducto(){
   
   if(_productosArchivo.guardar(crearProducto())){
      cout << "El producto fue guardado con exito!" << endl;
   }
   else{
      cout << "No se pudo guardar el producto!" << endl;
   }
}

void ProductosManager::listarProductos(){
   int cantidad = _productosArchivo.getCantidadRegistros();
   
   for(int i=0; i<cantidad; i++){
      cout << "--------------------------" << endl;
      mostrarProducto(_productosArchivo.leer(i));
      cout << "--------------------------" << endl;
   }
}

void ProductosManager::menu(){
   int option;
   system("cls");
   do{
      system("cls");
      
      cout << "------ MENU PRODUCTOS ------- " << endl;
      cout << "1- AGREGAR PRODUCTO " << endl;
      cout << "2- LISTAR TODOS LOS PRODUCTOS" << endl;
      cout << "-----------------------------" << endl;
      cout << "0- SALIR" << endl;
      cout << "Opcion: "<< endl;
      cin >> option;
      
      switch(option){
      case 1:
         agregarProducto();
         system("pause");
         break;
         
      case 2:
         listarProductos();
         system("pause");
         break;
      }
      
      
      
   }while(option != 0);
   
}
