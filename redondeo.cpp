#include <iostream>

using namespace std;

int main(){
	float a,b,result = 0;
	
	cout << "Primer Valor: "; cin >> a;
	cout << "Segundo Valor: "; cin >> b;
	
	result = (a/b)+1;
	
	cout.precision(2);
	cout << "\nEl resultado es: " << result << endl;
	
	return 0;
}
