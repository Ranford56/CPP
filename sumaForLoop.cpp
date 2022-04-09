#include <iostream>
#include <math.h>

int main(){
	int aux, cuadrado = 0;

	for(int i = 0; i < 10; i++){
		cuadrado = pow(i,2);
		aux += cuadrado;
	}
	std::cout << aux << std::endl;
}
