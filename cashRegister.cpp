#include <iostream>
#include <string>

using namespace std;

int main(){
	string producto;
	int cantidad;
	int flag = 0;
	
	cout << "Gracias por comprar con nosotros!\n:";
	
	while(flag == 0){
		cout << "Porfavor introduzca el nombre del producto que desea: ";
		cin >> producto;
		if (producto == "xx"){
			flag = 1;
		}
		cout << "Ingrese el valor del producto: ";
		cin >> cantidad;
	}
	
	cout << "Gracias!";
	return 0;
	
}
