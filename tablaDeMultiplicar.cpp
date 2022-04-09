#include <iostream>

using namespace std;

int main(){
	int x = 0;
	
	cout << "Ingrese un valor: "; cin >> x;
	
	while(x < 1 || x > 10){
		cout << "Ingrese un valor entre 1 y 10! "; cin >> x;
	}
	
	for (int i = 0; i <= 10; i++){
		cout << x << "*" << i << " = " << x*i << endl;
	}
	return -1; 
}
