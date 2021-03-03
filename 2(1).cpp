#include <iostream>
#include <fstream>
using namespace std;

int main() {
   char cadena[128];    
   ifstream fe("numeros.txt"); 	  //funcion que lee y muestra el archivo de texto

   while(!fe.eof()) {    		  //mientras no sea el final del archivo
      fe >> cadena;
      cout << cadena << endl; 	  //imprime el texto que se encuentra en el programa, en este caso los numeros del archivo de texto
   }
   fe.close();                    //cierra el archivo

   return 0;
}
