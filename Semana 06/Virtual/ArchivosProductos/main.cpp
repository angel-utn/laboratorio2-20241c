#include <iostream>
//#include "Producto.h"
//#include "ProductoArchivo.h"
#include "ProductosManager.h"


using namespace std;

int main () {
   ProductosManager pm;
   
   pm.menu();
   
   /**
   ProductoArchivo productoArchivo;
   
   Producto p(3, "Alfajor", 800, 10, 5, 1, Fecha(4,4,2029), false);
   
   if(productoArchivo.guardar(p)){
      cout << "El producto fue guardado con exito!" << endl;
   }
   else{
      cout << "No se pudo guardar el producto!" << endl;
   }
   
   
   
   int cantidad = productoArchivo.getCantidadRegistros();
   
   for(int i=0; i<cantidad; i++){
      Producto reg = productoArchivo.leer(i);
      
      cout << "Nombre: " << reg.getNombre() << endl;
      cout << "Precio: " << reg.getPrecio() << endl;
      cout << "Stock: " << reg.getStock() << endl;
      cout << "Stock Minimo: " << reg.getStockMinimo() << endl;
      cout << "Fecha vencimiento: " << reg.getFechaVencimiento().toString() << endl;
      cout << "--------------------------" << endl;
   }
   
   
   
   
   */
   
   
   /**
   Producto p;
   
   p.setNombre("Brian Laras");
   
   if(p.getNombre().size() > 20){
      cout << "El nombre es muy largo...";
   }
   
   if(p.getNombre() == "Brian Lara"){
      cout << "Hola!!";
   }
   else{
      cout << "quien te conoce...";
   }
   */
   
   
   
   
   /*
   int v[5]{1,2,3,4,5};
   Fecha fechas[5]{
      Fecha(2,6,1990),
      Fecha(3,5,2010),
      Fecha(2,6,1990),
      Fecha(3,5,2010),
      Fecha(2,6,1990),
   };
   
   ///foreach
   for(Fecha f : fechas){
      cout << f.toString() << endl;   
   }  
   */
   
   
	
	return 0;
}

