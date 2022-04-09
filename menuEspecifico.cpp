#include <iostream>

int main(){
	int valor, aux = 0;

	do{
		std::cout << "Ingrese un valor: "; std::cin >> valor;
		aux += valor;
	}while((valor < 30 && valor > 20) || valor == 0);

	std::cout << aux;
	return 0;
}
