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







