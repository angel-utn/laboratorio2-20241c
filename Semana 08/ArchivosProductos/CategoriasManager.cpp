#include "CategoriasManager.h"
#include <iostream>
using namespace std;

void CategoriasManager::menu()
{
    int opcion;
    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "------ MENU CATEGORIAS------- " << endl;
        cout << "-----------------------------" << endl;
        cout << "1. AGREGAR CATEGORIA" << endl;
        cout << "2. LISTAR CATEGORIAS" << endl;
        cout << "3. MODIFICAR CATEGORIA" << endl;
        cout << "-----------------------------" << endl;
        cout << "0. SALIR" << endl << endl;
        cout << "INGRESE UNA OPCION: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            agregarCategoria();
            break;
        case 2:
            listarCategorias();
            break;
        case 3:
            modificarCategoria();
            break;

        case 0:
            return;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
        system("pause");
    } while (opcion != 0);
}

void CategoriasManager::agregarCategoria()
{
    Categoria registro = crearCategoria();
    if (_categoriasArchivo.guardar(registro))
    {
        cout << "Categoria guardada correctamente" << endl;
    }
    else
    {
        cout << "Error al guardar la categoria" << endl;
    }
}

void CategoriasManager::listarCategorias()
{
    int cantidad = _categoriasArchivo.getCantidadRegistros();
    Categoria *registros = new Categoria[cantidad];
    if (registros == nullptr)
    {
        cout << "Error al reservar memoria" << endl;
        return;
    }

    _categoriasArchivo.leerTodos(registros, cantidad);
    for (int i = 0; i < cantidad; i++)
    {
        mostrarCategoria(registros[i]);
    }

    delete[] registros;
}

Categoria CategoriasManager::crearCategoria()
{
    Categoria registro;
    registro.setIdCategoria(_categoriasArchivo.getNuevoID());

    string nombre;
    cout << "Ingrese nombre de la categoria: ";
    cin >> nombre;
    registro.setNombre(nombre);
    return registro;
}

void CategoriasManager::volverCargarCategoria(Categoria &registro)
{
   string nombre;
   cout << "Ingrese nombre de la categoria: ";
   cin >> nombre;
   registro.setNombre(nombre);
}

void CategoriasManager::mostrarCategoria(Categoria registro)
{
    cout << "ID: " << registro.getIdCategoria() << endl;
    cout << "Nombre: " << registro.getNombre() << endl;
}

void CategoriasManager::modificarCategoria()
{
    int id;
    cout << "Ingrese el ID de la categoria a modificar: ";
    cin >> id;
    int index = _categoriasArchivo.buscarByID(id);
    if (index == -1)
    {
        cout << "Categoria no encontrada" << endl;
        return;
    }
    Categoria registro = _categoriasArchivo.leer(index);
    mostrarCategoria(registro);
    volverCargarCategoria(registro);
    if (_categoriasArchivo.guardar(index, registro))
    {
        cout << "Categoria modificada correctamente" << endl;
    }
    else
    {
        cout << "Error al modificar la categoria" << endl;
    }
}
