#include <cstdlib>
#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;

#include "includes/pila.h"

template <class T>
void fusionar(Pila<T> primera, Pila<T> segunda,Pila<T> &fusion){
	
	Pila<T> aux(3);
	
	// dar la vuelta, para que los menores queden arriba
	T dato, a, b;
	while(segunda.vacia() != 1){
			dato = segunda.sacar();
			aux.meter(dato);
	}
	
	segunda = aux;

	while(primera.vacia() != 1 || segunda.vacia() != 1){
		
	a=primera.sacar();	
	b=segunda.sacar();
	
	if(a>=b){
		fusion.meter(b);
		primera.meter(a);
	}
	else{
		fusion.meter(a);
		segunda.meter(b);
	}	
	}

}

int main(int argc, char *argv[]) {
	
	Pila <int>primera(3);
	Pila <int>segunda(3);
	Pila <int>fusion(6);
		
	primera.meter(7);
	primera.meter(6);
//	primera.meter(5);
	
//	segunda.meter(1);
	segunda.meter(2);
	segunda.meter(3);
	
	cout<<"asfsdfs";
	
	fusionar(primera, segunda, fusion);
	
	while(fusion.vacia() != 1 ){
		cout<<fusion.sacar()<<endl;
	}
	
	system("pause");
	return 0;
} 
