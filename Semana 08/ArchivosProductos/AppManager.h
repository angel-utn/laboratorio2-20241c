#pragma once
#include "ProductosManager.h"
#include "CategoriasManager.h"

class AppManager{
public:
    void menu();
private:
    ProductosManager _pm;
    CategoriasManager _catman;
};
