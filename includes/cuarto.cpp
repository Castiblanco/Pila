#include <cstdlib>
#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;

#include "includes/pila.h"

bool palindromo(char *cadena);

int main(int argc, char *argv[]) {
    
    char cadena[] = "oso";
    bool pa;
    
    pa = palindromo(cadena);
    
    if(pa)
          cout<<"Es palindromo"<<endl;
    else
          cout<<"No es palindromo"<<endl;
          
    system("pause");
}

bool palindromo(char *cadena){
     
     bool x;
     
     int tamano = 20;
     
     char otro[] ="";
     
     Pila <char> aux(tamano);
     
     for(int i=0;i<tamano;i++){
             aux.meter(cadena[i]);
     }
     
     for(int i=0;i<tamano;i++){
             otro[i]=aux.sacar();
     }
     
     if(otro == cadena)
             x = true;
     else
         x = false;
     
     
     
     
     
     return x;
}
