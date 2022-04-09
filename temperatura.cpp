// Escriba un progrma que lea 6 valores, devuelva la media de los valores, el valor mas alto y mas bajo

#include <iostream>
#include <math.h>

int main(){
	int media, menor, mayor, aux, aux2, aux3 = 0;
	int valores[5];

	for(int i = 0; i < 6; i++){
		std::cout << "Ingrese el " << i << " valor: "; std::cin >> valores[i];
	}

	//mayor valor de todos
	for(int i = 0; i < 6; i++){	
		if(valores[i] > aux){
			aux = valores[i];
		}
	}

	std::cout <<"El mayor valor de todos es: " << aux << std::endl;

	aux2 = aux;

	//menor valor de todos
	for(int i = 0; i < 6; i++){
		if(valores[i] < aux2){
			aux2 = valores[i];
		}
	}


	std::cout <<"El menor valor de todos es: " << aux2 << std::endl;

	//media aritmetica
	for(int i = 0; i < 6; i++){
		aux3 += valores[i];
	}	

	std::cout <<"La media de los valores es: " << aux3/6 << std::endl;

}

