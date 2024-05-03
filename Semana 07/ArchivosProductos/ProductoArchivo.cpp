#include "ProductoArchivo.h"


/**
   ab -- agregar
   wb -- borra todo y te permite agregar
   rb -- lee
   
   rb+ -- lee y modifica (no agrega)
   ab+ -- agrega y lee
*/

bool ProductoArchivo::guardar(Producto reg){
   bool result;
   FILE *pFile;
   
   pFile = fopen("productos.dat", "ab");
   
   if(pFile == nullptr){
      
      return false;
   }
   
   result = fwrite(&reg, sizeof (Producto), 1, pFile);
   
   fclose(pFile);
   
   return result;
}

bool ProductoArchivo::guardar(int index, Producto reg){
   bool result;
   FILE *pFile;
  
   pFile = fopen("productos.dat", "rb+");
   
   if(pFile == nullptr){
      
      return false;
   }
   
   fseek(pFile, sizeof(Producto) * index, SEEK_SET);
   
   result = fwrite(&reg, sizeof (Producto), 1, pFile);
   
   fclose(pFile);
   
   return result;
}

int ProductoArchivo::buscarByID(int id){
    Producto reg;
    int pos = 0;
    FILE * pFile;
    
    pFile = fopen("productos.dat", "rb");
    if(pFile == nullptr){
        return -1;
    }
    
    while(fread(&reg, sizeof(Producto), 1, pFile)){
        if(reg.getID() == id){
            fclose(pFile);
            return pos;
        }
        pos++;
    }
    
    fclose(pFile);
    return -1;
}

Producto ProductoArchivo::leer(int index){
   bool result;
   Producto reg;
   FILE *pFile;

   pFile = fopen("productos.dat", "rb");
   
   if(pFile == nullptr){
      return reg;
   }
   
   fseek(pFile, index * sizeof (Producto), SEEK_SET);
   
   fread(&reg, sizeof(Producto), 1, pFile);
   
   fclose(pFile);
   
   return reg;   
}


void ProductoArchivo::leerTodos(Producto registros[], int cantidad){
   bool result;
   FILE *pFile;

   pFile = fopen("productos.dat", "rb");
   
   if(pFile == nullptr){
      return;
   }
   
   fread(registros, sizeof(Producto), cantidad, pFile);
   
   fclose(pFile);
}



int ProductoArchivo::getCantidadRegistros(){
   FILE *pFile;
   int tam;
   
   pFile = fopen("productos.dat", "rb");
   
   if(pFile == nullptr){
      return 0;
   }
   
   fseek(pFile, 0, SEEK_END);
   
   tam = ftell(pFile) / sizeof (Producto);
      
   fclose(pFile);
   
   return tam;
}

int ProductoArchivo::getNuevoID(){
    int cantidad = getCantidadRegistros();
    
    if(cantidad>0){
        return leer(cantidad-1).getID()+1;
    }
    else{
        return 10;
    }
}











