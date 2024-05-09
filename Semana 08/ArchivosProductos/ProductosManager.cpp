#include <iostream>
using namespace std;
#include "ProductosManager.h"
#include "Categoria.h"

Producto ProductosManager::crearProducto()
{
    int id, idcategoria;
    string nombre;
    float precio;

    id= _productosArchivo.getNuevoID();
    cout << "Ingrese ID: " << id<< endl;

//      cout << "Ingrese ID: ";
//      cin >> id;
//
//      while (_productosArchivo.buscarByID(id) >= 0){
//         cout << "-- Reingrese ID: ";
//         cin >> id;
//      }

    cin.ignore();
    cout <<"Ingrese nombre: ";
    getline(cin, nombre);

    cout<< "Ingrese precio: ";
    cin >> precio;

    cout << "Ingrese ID de Categoria: ";
    cin >> idcategoria;

    while (_categoriaArchivo.buscarByID(idcategoria) == -1){
      cout << "-- Reingrese ID de Categoria: ";
      cin >> idcategoria;
    }

    return Producto(id, nombre, precio, idcategoria, 10, 5, 1, Fecha(4,4,2029), false);
}

void ProductosManager::volverCargarProducto(Producto &registro)
{
    string nombre;
    float precio;
    int idcategoria;

    cin.ignore();
    cout <<"Ingrese nombre: ";
    getline(cin, nombre);

    cout<< "Ingrese precio: ";
    cin >> precio;

    cout<< "Ingrese ID de categoria: ";
    cin >> idcategoria;

    registro.setNombre(nombre);
    registro.setPrecio(precio);
    registro.setIDCategoria(idcategoria);
}

void ProductosManager::mostrarProducto(Producto reg)
{
    int posCategoria = _categoriaArchivo.buscarByID(reg.getIDCategoria());
    Categoria categoria = _categoriaArchivo.leer(posCategoria);

    cout << "ID: " << reg.getID() << endl;
    cout << "Nombre: " << reg.getNombre() << endl;
    cout << "Categoria: " << categoria.getNombreyID() << endl;     // Almacen (3), Golosinas (1)
    cout << "Precio: " << reg.getPrecio() << endl;
    cout << "Stock: " << reg.getStock() << endl;
    cout << "Stock Minimo: " << reg.getStockMinimo() << endl;
    cout << "Fecha vencimiento: " << reg.getFechaVencimiento().toString() << endl;
    cout << "Estado: " << (reg.getEliminado() ? "Eliminado": "Disponible") << endl;
}

void ProductosManager::agregarProducto()
{

    if(_productosArchivo.guardar(crearProducto()))
    {
        cout << "El producto fue guardado con exito!" << endl;
    }
    else
    {
        cout << "No se pudo guardar el producto!" << endl;
    }
}

void ProductosManager::ordenarProductosPorPrecio(Producto productos[], int cantidad)
{
   int i, j;
   int posMaximo;

   for(i = 0; i < cantidad - 1; i++){
      posMaximo = i;

      for (j = i + 1; j < cantidad; j++){
         if (productos[j].getPrecio() > productos[posMaximo].getPrecio()){
            posMaximo = j;
         }
      }

      if (i != posMaximo){
         Producto aux = productos[i];
         productos[i] = productos[posMaximo];
         productos[posMaximo] = aux;
      }
   }
}

void ProductosManager::listarProductos(bool ordenadoPorPrecio)
{
    int cantidad = _productosArchivo.getCantidadRegistros();
    Producto *productos;

    productos = new Producto[cantidad];

    if(productos == nullptr)
    {
        cout << "No se pudo pedir memoria... " << endl;
        return;
    }

    _productosArchivo.leerTodos(productos, cantidad);

    if (ordenadoPorPrecio){
      ordenarProductosPorPrecio(productos, cantidad);
    }

    for(int i=0; i<cantidad; i++)
    {
        if(!productos[i].getEliminado())
        {
            cout << "--------------------------" << endl;
            mostrarProducto(productos[i]);
            cout << "--------------------------" << endl;
        }
    }

    delete [] productos;
}

void ProductosManager::modificarProducto()
{
    int idProducto, index;
    Producto producto;

    cout << "Ingrese id del producto a modificar: ";
    cin >> idProducto;

    index = _productosArchivo.buscarByID(idProducto);

    if(index != -1)
    {
        producto = _productosArchivo.leer(index);

        mostrarProducto(producto);

        volverCargarProducto(producto);

        if(_productosArchivo.guardar(index, producto))
        {
            cout << "Se modifico con exito!" << endl;
        }
        else
        {
            cout << "No se pudo modificar el producto!" << endl;
        }
    }
    else
    {
        cout << "No se encuentra ese producto!" << endl;
    }
}


void ProductosManager::eliminarProducto()
{
    int idProducto, index;
    Producto producto;
    bool eliminar;

    cout << "Ingrese id del producto a eliminar: ";
    cin >> idProducto;

    index = _productosArchivo.buscarByID(idProducto);

    if(index != -1)
    {
        producto = _productosArchivo.leer(index);

        mostrarProducto(producto);

        cout << "Esta segudo de que quiere eliminarlo? 1-Si 0-No: ";
        cin >> eliminar;

        if(eliminar)
        {
            producto.setEliminado(true);

            if(_productosArchivo.guardar(index, producto))
            {
                cout << "Se elimino con exito!" << endl;
            }
            else
            {
                cout << "No se pudo eliminar el producto!" << endl;
            }
        }
        else
        {
            cout << "El producto no fue eliminado!" << endl;

        }
    }
    else
    {
        cout << "No se encuentra ese producto!" << endl;
    }
}

void ProductosManager::menu()
{
    int option;
    do
    {
        system("cls");

        cout << "-----------------------------" << endl;
        cout << "------ MENU PRODUCTOS ------- " << endl;
        cout << "-----------------------------" << endl;
        cout << "1- AGREGAR PRODUCTO " << endl;
        cout << "2- LISTAR TODOS LOS PRODUCTOS" << endl;
        cout << "3- MODIFICAR PRODUCTO" << endl;
        cout << "4- ELIMINAR PRODUCTO" << endl;
        cout << "5- LISTAR ORDENADOS POR PRECIO" << endl;
        cout << "-----------------------------" << endl;
        cout << "0- SALIR" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
            agregarProducto();
            system("pause");
            break;

        case 2:
            listarProductos();
            system("pause");
            break;

        case 3:
            modificarProducto();
            system("pause");
            break;

        case 4:
            eliminarProducto();
            system("pause");
            break;

        case 5:
            listarProductos(true);
            system("pause");
         break;
        }

    }
    while(option != 0);

}
