#include <iostream> //libreria para entrada y salida de datos.
#include <string>

using namespace std;

int main(){
	int year = 2020;
	double price = 6.9; // a diferencia del float, el double tiene mayor espacio
	char status = 'N'; // comillas simples necesarias
	string make = "Ford"; // comillas dobles necesarias
	string model = "Mustang"; 
	string car = make + ' ' + model;
	bool forSale; //se pueden declarar variables y definirlas despues
	
	forSale= true;
	
	cout << "Year: " << year << endl;
	cout << "Price: " << price << endl;
	cout << "New/Used: " << status << endl;
	cout << "Car: " << car << endl;
	cout << "Availability: " << forSale << endl;
	
	
	// Ask for input
	string name;
	
	cout << "Porfavor ingrese su nombre: ";
	//cin >> name; // el problema con cin es que solo no acepta espacios porque los ve como caracteres de terminacion
	getline(cin, name); // get line resuelve el problema, pero se debe importar el header string y solo se puede utilizar con strings
	
	cout << "Bienvenido " + name << endl;
	return 0;
}

