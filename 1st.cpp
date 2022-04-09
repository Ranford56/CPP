#include <iostream>

using namespace std;

int main(){
	int pValor;
	int sValor;
	char word[1]; //aunque el valor definido de espacios es menor a la entrada, no significa que esta bien. Elias dice que estas cosas se deben tocar con pinzas, asi que cuidado
	
	cout << "Ingrese el primer valor: ";
	cin >> pValor;
	
	cout << "Ingrese el segundo valor: ";
	cin >> sValor;
	
	cout << "Ingrese una palabra: ";
	cin >> word;
	
	cout << "Operaciones primarias entre los dos valores: " << endl;
	cout << "El valor de la suma es: " << pValor + sValor << endl;
	cout << "El valor de la resta es: " << pValor - sValor << endl;
	cout << "El valor de la multiplicacion es: " << pValor * sValor << endl;
	cout << "El valor de la division es: " << pValor / sValor << endl;
	cout << "La palabra es: " << word << endl;
	
	return 0;
}
