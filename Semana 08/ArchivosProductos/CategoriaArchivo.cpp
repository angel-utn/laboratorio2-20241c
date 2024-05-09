#include "CategoriaArchivo.h"

bool CategoriaArchivo::guardar(Categoria registro){
    bool result;
    FILE *pFile;  
    pFile = fopen("categorias.dat", "ab");
    
    if(pFile == nullptr){
       return false;
    }
    result = fwrite(&registro, sizeof (Categoria), 1, pFile);
    fclose(pFile);
    return result;
}

bool CategoriaArchivo::guardar(int index, Categoria registro){
    bool result;
    FILE *pFile;
    pFile = fopen("categorias.dat", "rb+");
    
    if(pFile == nullptr){
       return false;
    }
    fseek(pFile, sizeof(Categoria) * index, SEEK_SET);
    result = fwrite(&registro, sizeof (Categoria), 1, pFile);
    fclose(pFile);
    return result;
}

int CategoriaArchivo::buscarByID(int id){
    Categoria reg;
    int pos = 0;
    FILE * pFile;
    
    pFile = fopen("categorias.dat", "rb");
    if(pFile == nullptr){
        return -1;
    }
    
    while(fread(&reg, sizeof(Categoria), 1, pFile)){
        if(reg.getIdCategoria() == id){
            fclose(pFile);
            return pos;
        }
        pos++;
    }
    
    fclose(pFile);
    return -1;
}

int CategoriaArchivo::getCantidadRegistros(){
    FILE * pFile;
    int cantidad;
    pFile = fopen("categorias.dat", "rb");
    if(pFile == nullptr){
        return 0;
    }
    fseek(pFile, 0, SEEK_END);
    cantidad = ftell(pFile) / sizeof(Categoria);
    fclose(pFile);
    return cantidad;
}

int CategoriaArchivo::getNuevoID(){
    int cantidad = getCantidadRegistros();
    
    if(cantidad>0){
        return leer(cantidad-1).getIdCategoria()+1;
    }
    else{
        return 1;
    }
}

Categoria CategoriaArchivo::leer(int index){
    bool result;
    Categoria reg;
    FILE *pFile;

    pFile = fopen("categorias.dat", "rb");
    
    if(pFile == nullptr){
       return reg;
    }
    
    fseek(pFile, index * sizeof (Categoria), SEEK_SET);
    
    fread(&reg, sizeof(Categoria), 1, pFile);
    
    fclose(pFile);
    
    return reg;   
}

void CategoriaArchivo::leerTodos(Categoria registros[], int cantidad){
    bool result;
    FILE *pFile;

    pFile = fopen("categorias.dat", "rb");
    
    if(pFile == nullptr){
       return;
    }
    
    fread(registros, sizeof(Categoria), cantidad, pFile);
    
    fclose(pFile);
}

