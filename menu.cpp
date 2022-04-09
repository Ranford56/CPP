#include <iostream>

using namespace std;

int main(){
	int selection;

	
	cout << "1. Opcion 1" << endl;
	cout << "2. Opcion 2" << endl;
	cout << "3. Opcion 3" << endl;
	cout << "4. Opcion 4" << endl;
	cout << "5. Opcion 5" << endl;
	cout << "6. Opcion 6" << endl;
	cout << "7. Opcion 7" << endl;
	cout << "0. Salir" << endl;
	
		
	cout << "Ingrese la opcion que desea escoger: "; cin >> selection;
	
	switch(selection){
		case 1: cout << "Ejectuando opcion 1..."; break;
		case 2: cout << "Ejecutando opcion 2..."; break;
		case 3: cout << "Ejecutando opcion 3..."; break;
		case 4: cout << "Ejecutando opcion 4..."; break;
		case 5: cout << "Ejecutando opcion 5..."; break;
		case 6: cout << "Ejecutando opcion 6..."; break;
		case 7: cout << "Ejecutando opcion 7..."; break;
		case 0: cout << "Saliendo..."; break;
		default: cout << "Ingrese una opcion valida porfavor."; break;
	}
	
	return 0;
}
